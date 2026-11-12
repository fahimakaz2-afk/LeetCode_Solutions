class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max_len = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            while (j < n && nums[j] > nums[j - 1]) {
                j++;
            }
            max_len = max(max_len, j - i);

            j = i + 1;
            while (j < n && nums[j] < nums[j - 1]) {
                j++;
            }
            max_len = max(max_len, j - i);
        }

        return max_len;
    }
};
