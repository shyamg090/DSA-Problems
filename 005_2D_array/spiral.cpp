// ------------------------------------code studio  (54)------------------------------------
//---------------print the input into spiral matrix-----------------------------
#include<iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
  int row= matrix.size();
  int col= matrix[0].size();

  int count=0;
  int total= row*col;

  //iniitaling the values 
  int startRow=0;
  int endRow=0;
  int startCol=0;
  int endCol=0;

  while(count < total){

    for(int i=startCol; count<total && i <= endCol; i++){    //right arrow
        ans.push_back( matrix[startRow][i] );
        count++;
    }
    startRow++;

    for(int i=startRow; count<total && i <= endRow; i++){   //down arrow
        ans.push_back( matrix[i][endCol] );
        count++;
    }
    endCol++;

    for(int i=endCol; count<total && i >= startCol; i++){   //left arrow
        ans.push_back( matrix[endRow][i] );
        count++;
    }
    endRow++;

    for(int i=endRow; count<total && i >= startCol; i++){
        ans.push_back( matrix[i][startCol] );
        count++;
    }
    startCol++;
  }
return ans;

}

// i <= endCol only this conditon gives error as count might go out of the row size 
// i<= startCol keeps track of index but not count hence 
// count<total && i<= endCol