#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[2][2]={{100,30}, {10,5}};
    vector<int> tempRow;
    vector<int> tempCol;

//for row sum
    for(int i=0; i<2; i++){
        int sum=0;
        for(int j=0;j<2; j++){
            sum= sum +arr[i][j];
        }
        tempRow.push_back(sum);
        
    }
        for(int i=0; i<tempRow.size(); i++){
        cout<<"----row---"<<tempRow[i]<<" ";
    }
    cout<<endl;

    

    //for col sum
    for(int j=0; j<2; j++){
        int sum=0;
        for(int i=0;i<2; i++){
            sum= sum +arr[i][j];
        }
        tempCol.push_back(sum);
        
    }

    for(int i=0; i<tempCol.size(); i++){
        cout<<"---col---"<<tempCol[i]<<" ";
    }
}