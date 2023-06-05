#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sol=0;
    // int size= sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        // cout<<"before in for loop sol:"<<sol<<"^"<<arr[i]<<endl;
        sol=sol^arr[i];
        // cout<<"after in for loop sol:"<<sol<<endl<<endl;
        // cout<<"after in for loop arr[i]:"<<arr[i]<<endl<<endl;
    }
    cout<<"Unique element:"<<sol<<endl;
        for(int i=1;i<size;i++){
        // cout<<"before in for loop sol:"<<sol<<"^"<<i<<endl;
        sol=sol^i;
        // cout<<"after in for loop sol:"<<sol<<endl<<endl;
        // cout<<"after in for loop arr[i]:"<<arr[i]<<endl<<endl;
    }
    cout<<sol;

}