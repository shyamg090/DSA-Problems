#include<iostream>
using namespace std;
int main(){
    // int n[5]={1,2,3,3,3,};
    // int n;
    // int count=1;
    // cin>>n;
    int a=0, b=1;
    int next=0;
    for(int i=0; i<10; i++){
        a=b;
        b=next;
        cout << next << " ";
        next= a+b;
    }
    // cout<<count;

}
