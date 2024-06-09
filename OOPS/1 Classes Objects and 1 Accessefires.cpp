#include<bits/stdc++.h>
using namespace std;

class Employee {
    private: // by deafult it's all private
        int a,b,c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1); // Decleration that ke iska defination age milega (but not gurenty)
        void printData(){
            cout<<"the value of a "<<a<<endl;
            cout<<"the value of b "<<b<<endl;
            cout<<"the value of c "<<c<<endl;
            cout<<"the value of d "<<d<<endl;
            cout<<"the value of e "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee cp;
    // cp.a = 84; <-- can't access this private data directely like this only it's class function can access this data (i.e., setData()) 
    cp.d = 101;
    cp.e = 104;
    cp.setData(1,2,4);   
    cp.printData();

    return 0;
}