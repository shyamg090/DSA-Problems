#include<iostream>
using namespace std;


int main(){

    string name="";

    cin>>name;
    cout<<"name is : ";
    int k=0, j=0;
    for(int i=0; i<name.length(); i++){
        if(name[i]==' ' || name[i]=='\0'){
            k=i-1;
            i=j;
            j=k+1;
            cout<<"bbb";
            while(i<=k){
                swap(name[i++], name[k--]);
                cout<<"a";
        }
        cout<<'h';
    }

}
    cout<<name<<endl;
}