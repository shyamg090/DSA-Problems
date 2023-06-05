#include<iostream>
using namespace std;

bool prime(int n){
    for (int i=2; i<n; i++ ){

        // if remainder ==0 then not a prime number else is a prime number
        if(n%i == 0){
            return 0;          
            // means false
        }
        return 1;
    }
}

int main(){
    int n;
    cin>>n;
    if(prime(n)){
        cout<<"is a prime number "<<n<<endl;
    }
    else{
        cout<<"not a prime number "<<n<<endl;
    }
}