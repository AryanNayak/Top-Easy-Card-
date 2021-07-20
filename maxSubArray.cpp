class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSoFar = nums[0], maxSum = nums[0]; 
        
        for(int i = 1; i < nums.size(); i++)
        {
            
            maxSoFar = max(nums[i], maxSoFar += nums[i]); 
            maxSum = max(maxSoFar, maxSum); 
            
        }
        
        return maxSum; 

    }
};