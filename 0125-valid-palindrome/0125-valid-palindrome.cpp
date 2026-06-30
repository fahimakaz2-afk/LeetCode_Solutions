class Solution {
public:
    bool pallindrome(string& s, int l, int r){
        if(l >= r) return true;

        if(!isalnum(s[l])) return pallindrome(s , l+1,r);

        if(!isalnum(s[r])) return pallindrome(s, l,r-1);

        if(tolower(s[l])!= tolower(s[r])) return false;

        return pallindrome(s, l + 1, r - 1);
    }

    bool isPalindrome(string s) {
        return pallindrome(s, 0, s.size()-1);
    }
};