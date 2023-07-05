// --------------------------code studio------------------------------

#include<iostream>
using namespace std;
vector<int> printWave(vector<vector<int>> arr[][3],int nrow,int ncol){
    vector<int> ans;

    for(int col = 0; col < ncol; col++){

        if(col & 1){

            for(int row= nrow-1; row>=0; row--){
                // cout<<arr[row][col] <<"! ";
                ans.push_back(arr[row][col]);
            }
        }
        else{

            for(int row=0; row<nrow ; row++){
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        cout<<endl;
    }
    return ans;
}
