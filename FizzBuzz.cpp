class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> s(n); 
        
        for(int i = 1; i <= n; i++)
        {
            if(i%3 == 0)
            {
                s[i - 1] += "Fizz"; 
            }
            
            if(i%5 == 0)
            {
                s[i - 1] += "Buzz"; 
            }
            
            if(empty(s[i - 1]))
            {
                s[i -1] += to_string(i); 
            }
        }
        return s; 
    }
};