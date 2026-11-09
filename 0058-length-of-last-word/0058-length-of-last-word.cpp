class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                if(i + 1 < s.length() && s[i+1] != ' '){
                    cnt = 0;
                }
            }
            else
                cnt++;
        }
        return cnt++;
    }
};