class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() > nums2.size())
        {
            return intersect(nums2, nums1); 
        }
        
        
        unordered_map<int, int> mp; 
        
        
        for(auto m : nums1)
        {
            mp[m]++; 
        }
        
        int k = 0; 
        
        for(auto m : nums2)
        {
            
            if(mp.find(m) != mp.end() && --mp[m] >= 0)
            {
                nums1[k++] = m; 
            }
        }
        
        return vector<int>(nums1.begin(), nums1.begin() + k); 
        
        
    }
};