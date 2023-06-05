#include<iostream>
using namespace std;

void printarray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(int a[],int n){
    int start=0, end=n-1;

    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

    printarray(a,n);
}

int main(){
    int a[5]={1,3,12,4,10};

    reverse(a,5);
}