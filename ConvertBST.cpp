/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        int n = nums.size(); 
        if(n == 0)
            return nullptr; 
        
        return buildTree(nums, 0, n - 1); 
 
    }
    
    TreeNode* buildTree(vector<int>& nums, int si, int ei)
    {
     
        if(si > ei)
        {
            return nullptr; 
        }
        
        int mid = (si + ei)/2;
        
        TreeNode* root = new TreeNode(nums[mid]); 
        
        root->left = buildTree(nums, si, mid - 1); 
        root->right = buildTree(nums, mid + 1, ei); 
        
        return root; 
    }
};