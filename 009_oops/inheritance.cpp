#include<iostream>
using namespace std;

class human{

    public:
        int height=6;
        int weight=5;
        int age=2;

        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }
};

class male : public human
{

    public:
        string color;

        void colors()
        {
            cout << "we have read color" <<endl;
        }
};

int main(){

    //creating obj for male
        male maleObj;
        //inherited from parent
        cout << maleObj.getAge() << endl;
        // childs unique method
        maleObj.colors();

        return 0;
}