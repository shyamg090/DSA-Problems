#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="shyam";
    reverse(s.begin(), s.end());
    cout<<s;

    // string reverse= "malayalam";
    // reverse(reverse.begin() , reverse.end());
    // cout<<reverse; ---no two reverse will work gives error

    // if(reverse == reversed){
    //     cout<<"palindrome";
    // }else{
    //     cout<<"not palindrome";
    // } ----will not work!!!

}