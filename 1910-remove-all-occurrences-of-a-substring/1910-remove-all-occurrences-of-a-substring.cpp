class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) < s.length()){
        int k  = s.find(part);
        s.erase(k, part.length());;
    }
        return s;
    }
};