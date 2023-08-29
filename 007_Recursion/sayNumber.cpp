#include<iostream>
using namespace std;

void sayNum(int n){
    string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n == 0){
        return;
    }

    int digit = n % 10;
     n = n / 10;

    // cout << arr[digit] << endl;

    sayNum(n);

    cout << arr[digit]<<" "; 
}

int main(){
    int n;
    cin >> n;
    sayNum(n);
}