class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1]*=0;
            }
        }

        int nzidx = 0;
        for(int k = 0; k < n; k++){
            if(nums[k] != 0){
                swap(nums[nzidx],nums[k]);
                nzidx++;
            }
        }
            return nums;
    }
};