#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(9);

    cout<<"position (from where it has to be swapped): ";
    int m;
    cin>>m;
    // 2 5 3 6 9 order

    int n=arr.size();
    int s=m+1, e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(int i=0; i<n; i++){
        cout<<"after reverse: "<<arr[i]<<endl;
    }
}