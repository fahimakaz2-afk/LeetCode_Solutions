class Solution {
public:
    void revString(vector<char>& s, int l , int r) {
        if(l >= r){
            return;
        }
        
        swap(s[l],s[r]);
        revString(s, l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        revString(s, 0, s.size()-1);
    }
};