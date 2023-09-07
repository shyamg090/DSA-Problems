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
        cout << "this value of this(adress of object): " << this <<endl;

        cout << endl<<"this adress->(arrow pointer)health(obj variable)";
        this->health = health;
        
        cout<<endl<< "this value at adress.health(obj variable)";
        (*this).health = health;

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
    //static way to create an objwct
    hero ramesh(10); //passing argument to constructor
    cout<<"private health:" << ramesh.gethealth()<<endl;
    cout << "public level:" << ramesh.getlevel()<<endl;

    //dynamic way to create an object
    hero *ramesh2 = new hero(30);
    cout << "way 1 to acess the gethealth  :" << (*ramesh2).gethealth() << endl;
    cout << "way 2 to acess the gethealth  :" << ramesh2->gethealth() << endl;

    cout<<endl;
    cout << "adress of ramesh object" << &ramesh;
} 
