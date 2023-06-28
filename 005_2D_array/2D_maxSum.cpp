#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[2][2]={{100,30}, {10,5}};

    int max=0;
    int rowIndex=-1;

//for row sum
    for(int i=0; i<2; i++){
        int sum=0;
        for(int j=0;j<2; j++){
            sum= sum +arr[i][j];
        }
        
        if(sum>max){
            max= sum;
            rowIndex=i;
        }  
    }
    cout<<max<<endl;
    

}