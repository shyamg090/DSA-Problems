#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,3,3,3};
    int n;
    int count=1;
    // cin>>n;
    // int a=0, b=1;
    // int next=0;
    for(int i=0; i<5; i++){
        if(n[i]==n[i+1] ){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;

}
        // a=b;
        // b=next;
        // next= a+b;
        // cout<<next<<" ";