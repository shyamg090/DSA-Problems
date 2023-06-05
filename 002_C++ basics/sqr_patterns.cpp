#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1; //must be declared here only for the code to work
        while (j<=n)
        { 
             //to get square * pattern
            // cout<<"* "; 

            //to get number pattern which is same as i
            //i.e row 1 will have 1111...,row n will have nnnnnn same for other rows
            cout<<i<<" ";

            //to get square pattern which is same as col
            //i.e col 1 will have 1111..., col n will have nnnnnn same for other col
            // cout<<"j"<<" ";

            // to get reverse col pattern
            // use formula n+j-1
            // cout<<n+j-1<<" ";

            j=j+1;
        }
        cout<<endl;
        i=i+1;
       }
}
