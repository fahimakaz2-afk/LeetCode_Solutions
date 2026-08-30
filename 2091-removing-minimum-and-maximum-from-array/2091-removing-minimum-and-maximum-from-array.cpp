class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n = nums.size();
        if (n <= 2) return n; 

        
        auto min_it = min_element(nums.begin(), nums.end());
        auto max_it = max_element(nums.begin(), nums.end());

         
        int min_idx = distance(nums.begin(), min_it);
        int max_idx = distance(nums.begin(), max_it);


        int i = min(min_idx, max_idx);
        int j = max(min_idx, max_idx);

        
        int delete_from_left = j + 1;                  
        int delete_from_right = n - i;                 
        int delete_from_both = (i + 1) + (n - j);      

        return min({delete_from_left, delete_from_right, delete_from_both});
    }
    
};