#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int&j = i;
    cout << i+1 << endl<< j+1 << endl;
}
