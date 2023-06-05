#include<iostream>
using namespace std;

void printarray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// or

void reverse2(int a[],int n){
   for(int i=0; i+1<n; i=i+2){
    if(i+1<n){
        swap(a[i],a[i+1]);
    }
   }

    printarray(a,n);
}

void reverse(int a[],int n){
    int start=0, end=1;

    while(start<end && start<n && end<n){
        swap(a[start],a[end]);
        start=start+2;
        end=end+2;
    }

    printarray(a,n);
}

int main(){
    int a[6]={1,3,12,4,10};
int b[6]={1,2,2,93,30};
    reverse(a,5);
    cout<<endl;
    reverse2(b,5);
}

