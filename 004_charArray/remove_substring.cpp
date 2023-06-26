#include<iostream>
using namespace std;
int main(){
    string str="daabcbaabcbc";
    string abc="abc";
    while(str.length()!=0 && str.find(abc)<str.length()){
        str.erase(str.find(abc), abc.length());
    }
    cout<<str;
}