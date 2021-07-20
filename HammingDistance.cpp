class Solution {
public:
    int hammingDistance(int x, int y) {
        
        
        int count = 0; 
        
        int xorans = x ^ y; 
        
        while(xorans)
        {
            xorans = xorans & (xorans - 1); 
            count++; 
        }
        
        
        return count; 
        
        
    }
};