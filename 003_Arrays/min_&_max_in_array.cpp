#include<iostream>
using namespace std;

int maxInt(int arr[],int size){
int maxnum= INT32_MIN;
    for(int i=0;i<size; i++){


        if(arr[i] > maxnum ){
            maxnum =arr[i];
        }

        // or using inbuilt function

        // maxnum= max(maxnum, arr[i]);

    }
    return maxnum;
}
int minInt(int arr[],int size){
int minnum= INT32_MAX;
    for(int i=0;i<size; i++){

        if(arr[i] < minnum ){
            minnum =arr[i];
        }

        // or 

        // minnum= min(minnum, arr[i]);
    }
    return minnum;
}

int main(){

int size;
cin>>size;

int arr[100];

for(int i=0; i<size; i++){
    cin>>arr[i];
}

int res=maxInt(arr,size);
cout<<"the maxium is :"<<res;
cout<<endl;
int res2=minInt(arr,size);
cout<<"the minium is :"<<res2;
cout<<endl;

}