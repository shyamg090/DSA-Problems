#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,7,2,9,4};
    // int n=arr.size();
    int n=5;

    // bubble sort arrange the largest to right place by swapping
    for(int i=0; i<n ; i++){
        for(int j=0; j<n-i-1; j++){
            // n-i-1 bcz n-i-1 gives the last second position of array 
            // example if after some rounds 6,7,2,4,9 is sorted array
            // then n-i-1 gives index=3 value=4 bcz 9 is sorteed and is in right position
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n; i++){
        cout<<"after sorted using bubblt sort :"<<arr[i]<<endl;
    }
}
