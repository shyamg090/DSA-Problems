class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> matrix(n, vector<int>(n));//2d vector
        int row=n,col=n;

        int count=1;
        int total= row* col;

        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;

        while(count <= total){

            for(int i=startCol; count<=total && i<=endCol ; i++){
                matrix[startRow][i]=count;
                count++;
            }
            startRow++;


            for(int i=startRow; count<=total && i<=endRow ; i++){
                matrix[i][endCol]=count;
                count++;
            }
            endCol--;

            for(int i=endCol; count<=total && i>=startCol ; i--){
                matrix[endRow][i]=count;
                count++;
            }
            endRow--;

            for(int i=endRow; count<=total && i>=startRow ; i--){
                matrix[i][startCol]=count;
                count++;
            }
            startCol++;
        }
        return matrix;
        
    }
};

// initialize the count to 1 
// then for the same spiral assign the value of count to the matrix box(location where it is pointing)
// increment the count value
// return the matrix