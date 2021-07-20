class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()  + 1, - 1); 
        return robFrom(0, nums, dp); 
    }
    
    int robFrom(int i, vector<int>& nums, vector<int>& dp)
    {
        
     if(i >= nums.size())
         return 0; 
    
    if(dp[i] != -1)
        return dp[i]; 
        
    dp[i] = max(robFrom(i + 1, nums, dp), robFrom(i + 2, nums, dp) + nums[i]); 
        
        return dp[i]; 
    }
};