class Solution {
public:
    void getallsubs(vector<int>& nums, vector<int>& ans, vector<vector<int>>& ss, int i){
        sort(nums.begin(),nums.end());

        if(i == nums.size()){
            ss.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        getallsubs(nums,ans,ss,i+1);

        
        ans.pop_back();
        int index = i+1;
        while(index < nums.size() && nums[index] == nums[index - 1] ){
            index++;
        }
        getallsubs(nums,ans,ss,index);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ss;
    vector<int>ans;
    getallsubs(nums,ans,ss,0);
    return ss;
    }
};