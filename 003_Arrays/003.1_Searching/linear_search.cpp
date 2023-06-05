#include<iostream>
using namespace std;

bool linear_search(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(key== a[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    int a[20];
    for(int i=0;i<n ;i++){
        cin>>a[i];
    }

    int key;
    cout<<"enter the search element :";
    cin>>key;

    bool res=linear_search(a,n,key);


    if(res==1){
        cout<<"key is found :"<<key<<endl;
    }
    else{
        cout<<"key is not found"<<key<<endl;
    }

}