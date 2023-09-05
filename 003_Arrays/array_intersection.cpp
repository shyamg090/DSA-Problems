// Array intersection of sorted array
/*  even if its not sorted and asked to find the intersection sort the array then do the same
    to sort use STL:      sort( arr.beg , arr.end );
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,arr[n],brr[n];
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    //     for(int i=0;i<n;i++){
    //     cin>>brr[i];
    // }
    // sort(arr.begin,arr.end);
    // sort(brr.begin,brr.end);
    int i=0,j=i;
    vector<int> ans;
    while(i<n && j<n){
        if(arr[i]==brr[j]){
            ans.push_back(i);
            i++;
            j++;
        }
        else if(arr[i]<brr[j] && i<n && j<n){
            i++;
        }
        else{
            j++;
        }

    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    }

