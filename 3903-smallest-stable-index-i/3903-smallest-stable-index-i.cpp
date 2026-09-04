class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        if(n == 0) return -1;

        for(int i = 0; i < n;i++){
            int current_max = nums[i];
            int current_min = nums[i];
            int diff = 0;
            for(int j = 0; j < i;j++){
               current_max = std :: max(current_max,nums[j]);
            }

            for(int k = i; k <n; k++){
                current_min  = std :: min(current_min ,nums[k]);
            }

            diff = current_max - current_min;

            if( diff <= k){
                return i;
            }
        }
        return -1;
    }
};