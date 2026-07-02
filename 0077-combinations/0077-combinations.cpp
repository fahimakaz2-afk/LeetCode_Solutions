class Solution {
public:
    void getCombinations(int start, int n, int k, vector<int>& current, vector<vector<int>>& ans) {
        // 1. Base Case: If we have picked exactly k numbers, save and return
        if (current.size() == k) {
            ans.push_back(current);
            return;
        }

        // 2. Choices: Loop through numbers from 'start' up to 'n'
        for (int i = start; i <= n; i++) {
            // 3. Make Choice: Add the number to our current path
            current.push_back(i);

            // 4. Dive: Recursively call for the next numbers (passing i + 1)
            getCombinations(i + 1, n, k, current, ans);

            // 5. Undo Choice (Backtrack): Remove the number we just added
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>> ans;
        vector<int> current;
        
        // Start exploring from the number 1
        getCombinations(1, n, k, current, ans);
        
        return ans;
    }
};