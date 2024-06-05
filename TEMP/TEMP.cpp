#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        string color;
        void race(void);
};

void Car :: race(void){
    cout<<"Bhroom"<<endl;
}

int main()
{
    Car c1;
    c1.color="black";
    cout<<c1.color<<endl;
    c1.race();

    return 0;
}