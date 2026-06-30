class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int>minrow;
        vector<int>maxcol;

        for(int i = 0; i < row; i++){
            int min = matrix[i][0];

            for(int j = 0; j < col; j++){
                if(min > matrix[i][j]){
                    min = matrix[i][j];
                }
                
               
            }
            minrow.push_back(min);
        }

        for(int j = 0; j < col; j++){
            int max_val = matrix[0][j]; 
            for(int i = 0; i < row; i++){ 
                 if(max_val < matrix[i][j]){
                        max_val = matrix[i][j];
                    }
                }
             maxcol.push_back(max_val); 
        }
        vector<int>luckyno;
            for(int val1: minrow){
                for(int val2: maxcol){
                    if(val1 == val2){
                        luckyno.push_back(val1);
                    }
                }
            }
        return luckyno;
    }
};