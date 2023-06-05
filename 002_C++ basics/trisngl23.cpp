#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j1=1;
        while(j1<=i){
            cout<<j1;
            j1=j1+1;
        }
    }
}