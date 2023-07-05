class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();

        int rowIndex=0; //index 0
        int colIndex= col-1; //index pos [0][3]

        while(rowIndex < row && colIndex >= 0){

            int ele= matrix[rowIndex][colIndex];

            if(ele == target){
                return 1;
            }
            if(ele < target){
                rowIndex++;  //row changes but col remains same [0][4]-->[1][4]-->[2][4]
            }
            else{
                colIndex--; //colchanges but row remains same [0][3]-->[0][2]-->..
            }
        } 
        return 0;
    }
};