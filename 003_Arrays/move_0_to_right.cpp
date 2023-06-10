#include<iostream>
using namespace std;

int main(){
    int arr[5]={0,2,4,0,1};
    int n=5;

    int i=0; //bcz all non-zero have to be left hence starts with 0.

    for(int j=0; j<n ; j++){

        if(arr[j]!=0){        //only execute if j!=0; j++ runs as it is;
            swap(arr[j],arr[i]);  
            i++;                //i++ only if it enters if loop.
        }
    }
// --------------------------------------for printing-------------------------------------------
    for(int i=0; i<n; i++){
        cout<<"after moving all non-zero to left/ zero to right: "<<arr[i]<<endl;
    }
}