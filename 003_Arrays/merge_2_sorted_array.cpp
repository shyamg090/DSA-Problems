#include<iostream>
using namespace std;

int printToArray(int arr3[] , int o){
    for(int i=0; i<o; i++){
        cout<<"after merging arrr1,arr2: "<<arr3[i]<<endl;
    }
}

int mergeToArray(int a[],int n, int b[],int m, int c[]){
    int i=0, j=0, k=0;

    while(i<n && j<n){
        if(a[i] <b[j]){
            c[k++]= a[i++];
        }else{
            c[k++]= b[j++];
        }
    }

    while(i<n){
        c[k++]=a[i++];
    }

    while(j<n){
        c[k++]=b[j++];
    }

}

int main(){
    int arr1[5]={2,4,6,8,10};
    // int n=arr1.size();
    int arr2[5]={1,3,5,7,9};
    // int m=arr2.size();
    int arr3[10]={};

    mergeToArray(arr1 , 5, arr2, 5, arr3);

    printToArray(arr3, 10);
}