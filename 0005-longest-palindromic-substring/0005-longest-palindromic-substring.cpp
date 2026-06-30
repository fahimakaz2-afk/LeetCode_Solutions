class Solution {
public:
    bool ispal(string& s, int l, int r){
        if(l >= r) return true;
        if(s[l]!=s[r]) return false;
        return ispal(s,l+1,r-1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int bestlen = 1;
        int beststart = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int len = j - i + 1;
                if(len > bestlen && ispal(s,i,j) ){
                    bestlen = len;
                    beststart = i;
                }
            }
        }
        return s.substr(beststart, bestlen);
    }
};