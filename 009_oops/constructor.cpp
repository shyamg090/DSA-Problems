#include<iostream>
using namespace std;

class hero{
    public:
        int health;
        char level;

        hero() //default constructor 
        {
            cout << "default constructor "<< endl;
        }

        hero(int health , char level){ ///parameterized constructor
            this->health = health;
            this->level = level;
        }

        void print(){
            cout << this->health << endl;
            cout << this->level << endl;
        }

};
int main(){
        hero ramesh; //static obj creation--for default constructor

        hero ramesh2(10, 'A');
        ramesh2.print();

        hero *suresh = new hero(); //dynamic - default

        hero *suresh2 = new hero(50 , 'V');
        suresh2->print();

        hero copyRamesh = ramesh2;
        copyRamesh.print();

        return 0;
}