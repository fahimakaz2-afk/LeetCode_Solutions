class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string digits = "123456789";
        for(int l = 2; l <= 9; ++l){
            for(int start = 0; start <= 9 - l; ++start){

                string sub = digits.substr(start,l);

                int num = stoi(sub); 

                if(num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};