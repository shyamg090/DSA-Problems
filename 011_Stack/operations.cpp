#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop(); //pops 30

    s.top(); //gives the peek i.e top element

    if( s.empty() )
    {
        cout << "stack is empty"<<endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }


        return 0;
}