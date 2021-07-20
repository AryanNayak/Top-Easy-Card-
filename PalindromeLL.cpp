/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
        {
            return head; 
        }
        
        
        ListNode* slow = head; 
        ListNode* fast = head; 
        
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            
            slow = slow->next; 
            fast = fast->next->next; 
        }
    
        return slow;    
    }
    ListNode* reverse(ListNode* head)
    {
        
        if(head == nullptr || head->next == nullptr)
        {
            return head; 
        }
        
        ListNode* rev = reverse(head->next); 
        head->next->next = head; 
        head->next = nullptr; 
        return rev; 
    }
    bool isPalindrome(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
        {
            return true; 
        }
        
        ListNode* mid = middleNode(head);
        ListNode* tHead = mid->next; 
        mid->next = nullptr; 
        tHead = reverse(tHead);       
        
        ListNode* c1 = head; 
        ListNode* c2 = tHead; 
        
        bool res = true; 
        while(c1 != nullptr && c2 != nullptr)
        {
            
            if(c1->val != c2->val)
            {
                res = false; 
                break; 
            }            
            c1 = c1->next; 
            c2 = c2->next; 
        }
        
        tHead = reverse(tHead); 
        mid->next = tHead; 
        
        
        return res; 
        
    }
};