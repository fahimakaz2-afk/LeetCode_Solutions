class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int max_val = 0; 
        
        
        for(int i = s.length() - 1; i >= 0; i--)
        {
            int current_val = 0;
            
            
            if(s[i] == 'I') current_val = 1;
            if(s[i] == 'V') current_val = 5;
            if(s[i] == 'X') current_val = 10;
            if(s[i] == 'L') current_val = 50;
            if(s[i] == 'C') current_val = 100;
            if(s[i] == 'D') current_val = 500;
            if(s[i] == 'M') current_val = 1000;
            
         
            if (current_val < max_val) {
                num -= current_val;
            } else {
                num += current_val;
                max_val = current_val; 
            }
        }
        
        
        return num;
    }
}; 