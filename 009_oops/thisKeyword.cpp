#include<iostream>
using namespace std;

class hero{

    private:
        int health;
    public:
        int level;

    //constructor
    hero(int health){
        //health = health;  ////wrong this make the compiler confuse
        cout << "this value: TDFFFT" << this<<endl;
        this->health = health;
    }    

    int gethealth(){
        return health; //bcz it cant acess directly
    }
    int getlevel(){
        return level; //we can getter both public and private
    }
    int sethealth(int h){
        health = h;
    }
    int setlevel(int l){
        level = l;
    }
};

int main()
{
    hero ramesh(10); //passing argument to constructor
    cout<<"private health:" << ramesh.gethealth()<<endl;
    cout << "public level:" << ramesh.getlevel()<<endl;

    cout<<endl;
    cout << "adress of ramesh object" << &ramesh;
} 
