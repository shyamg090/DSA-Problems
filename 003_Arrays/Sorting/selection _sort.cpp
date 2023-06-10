#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,23,4,6,9};
    for(int i=0 ; i< n-1; i++){
        int minIndex= i;
        for(int j=i+1 ; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for(int i=0; i<n ; i++){
        cout<<arr[i];
    }
}