class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0;
        int odd = 0;

        for(int val: nums1){
            if(val % 2 == 0)
                even++;
            else
                odd++;
        }

         bool can_make_all_even = (odd == 0) || (odd >= 2);

         bool can_make_all_odd = (odd >= 0) || (even == 0);

          return can_make_all_even || can_make_all_odd;

    }
};