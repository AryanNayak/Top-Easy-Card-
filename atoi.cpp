class Solution {
public:
    int myAtoi(string s) {
        
        long long int res = 0; 
        bool sign = false; 
        
        while(s[0] == ' ')
        {
            s.erase(s.begin()); 
        }
        
        if(s[0] == '+' || s[0] == '-')
        {
            if(s[0] == '-')
            {
                sign = true; 
            }
            s.erase(s.begin()); 
        }
        
        for(auto c: s)
        {
            
            if(isdigit(c))
            {
                res = res*10 + c - '0'; 
                
                if(res > INT_MAX)
                {
                    return sign ? INT_MIN : INT_MAX;
                }
            }
                else
                    break; 
        }
        
        
        
        if(sign)
        {
            res = -1*res; 
        }
        
        
        return res; 
        
    }
};