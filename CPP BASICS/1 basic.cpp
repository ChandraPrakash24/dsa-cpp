#include<bits/stdc++.h>
using namespace std;

typedef struct employee
{
    int id;
    float salary;
    char gender;
    string name;
} ep;


int main()
{
     
    ep jhon;
    jhon.gender = 'm';
    jhon.id = 4;
    jhon.name = "jhone doe";
    jhon.salary = 120.001;

    // cout<<jhon.gender<<endl;
    // cout<<jhon.id<<endl;
    // cout<<jhon.name<<endl;
    // cout<<jhon.salary<<endl;

    // const string ci = "z";
    cout<<typeid(jhon).name();
// std::cout << typeid(ci).name() << '\n';


    return 0;
}