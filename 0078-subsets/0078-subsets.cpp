class Solution {
public:
    void getAllsub(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& Asub){
        if(i == nums.size()){
            Asub.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllsub(nums, ans, i+1, Asub);

        //exclude
        ans.pop_back();

        getAllsub(nums, ans, i+1, Asub);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Asub;
        vector<int> ans;

        getAllsub(nums, ans, 0,Asub);
        return Asub;
    }
};