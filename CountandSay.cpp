class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 1)
        {
            return "1"; 
        }
        
        string str = "1"; 
        
        
        for(int i = 2; i <= n; i++)
        {
            
            string temp = ""; 
            
            for(int j = 0; j < str.size(); j++)
            {
                
                int count = 1; 
                int x = j +1; 
                
                
                while(x < str.size() && str[x] == str[j])
                {
                    count++; 
                    x++; 
                }
                temp.push_back('0' + count); 
                temp.push_back(str[j]); 
                j = x - 1; 
            }
        str  = temp; 
        }
        
        return str; 
    }
};