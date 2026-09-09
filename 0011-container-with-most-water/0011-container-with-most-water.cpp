class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size()-1,  wt = 0,  ht, ans = 0;
        while(lp < rp)
        {
            wt = rp - lp;
            ht = min(height[lp], height[rp]);
            int CurrArea = wt*ht;
            ans = max(CurrArea, ans);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return ans;
        
    }
};