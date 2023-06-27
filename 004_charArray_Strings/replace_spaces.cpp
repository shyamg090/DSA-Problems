#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str="my name is shyam";
    string temp="";
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp;
}

// same array
// int main(){
//     string str="my name is shyam";
//     // string temp="";
//     for(int i=0; i<str.length(); i++){
//         if(str[i]==' '){
            
//         }
        
//     }
//     cout<<str;
// }