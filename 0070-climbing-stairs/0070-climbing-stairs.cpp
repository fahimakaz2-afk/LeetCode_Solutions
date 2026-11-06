class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;

        int p1 = 1;
        int p2 = 2;
        int cur = 0;

        for(int i = 3; i <=n; i++){
            cur = p1 + p2;
            p1 = p2;
            p2  = cur; 
        }
        return cur;

    }
};