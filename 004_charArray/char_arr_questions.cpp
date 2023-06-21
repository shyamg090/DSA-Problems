#include<iostream>
using namespace std;

int convert(char ch){
    if(ch<='A' && ch>=''Z){
        return ch;
    }else{
        char temp= ch - 'a'+ 'A';
        return temp;
    }
}

bool checkPalindrome(char str[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(str[s] != str[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}

void reverseString(char name[], int len){
    int s=0;
    int e=len-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int lengthOfString(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[10];

    cin>>name;
    cout<<"name is : ";
    cout<<name<<endl;
    int length=lengthOfString(name);

    cout<<"length of string: "<<length<<endl;

    reverseString(name,length); //calling and it updates original array as original is passed
    cout<<"reversed string: "<< name<<endl;

    cout<<"uppercase: "<<convert(name);

    if(checkPalindrome(name,length)){
        cout<<"is palindrome :"<<name;
    }else{
        cout<<"not palindrome :"<< name;
    }
    
}