// ------------------------------------leetcode(54)------------------------------------
//---------------print the input into spiral matrix-----------------------------
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col= matrix[0].size();
        vector<int> ans;

        int count=0;
        int total= row* col;

        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;

        while(count < total){

            for(int i=startCol; count<total && i<=endCol ; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++; //after the row it should start with next row {RIGHT}


            for(int i=startRow; count<total && i<=endRow ; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--; //after the col it should start with prev col {DOWN}

            for(int i=endCol; count<total && i>=startCol ; i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--; //after the row it should start with prev row {LEFT}

            for(int i=endRow; count<total && i>=startRow ; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++; //after the col it should start with next col {UP}
        }
        return ans;
    }
};

// i <= endCol only this conditon gives error as count might go out of the row size 
// i<= startCol keeps track of index but not count hence 
// count<total && i<= endCol