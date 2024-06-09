#include<bits/stdc++.h>
using namespace std;

class Employee {
    int id;
    static int counter;

    public:
        void setData(){
            cout<<"Enter id: "<<endl;
            cin>>id;
        }

        void displayData(){
            cout<<"the id of employe "<<counter++<<" is : "<<id<<endl;
        }

        // static function are only allowed to access static variables only
        // static methodes are also class methods it contain no relation with objects
        static void printCounter(){
            cout<<counter<<endl;
        }
};

// it's a class'es variable shared by all objects
int Employee :: counter; //(Compolusary step) default value is 0 also you can do like this counter=588;

int main()
{
    Employee cp,ak,bh;

    cp.setData();
    cp.displayData();

    ak.setData();
    ak.displayData();

    bh.setData();
    bh.displayData();

    // cout<<counter; // can't acces like this, but you can acces methods like this below is the example   

    
    // int fCou = Employee::printCounter(); --> change type to return

    cout<<"Final count is : ";
    Employee::printCounter(); // Final count is : 3

    return 0;
}