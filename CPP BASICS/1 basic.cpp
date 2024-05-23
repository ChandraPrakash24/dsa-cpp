#include<bits/stdc++.h>
using namespace std;

class Pointer{
    private:
        int x,y;
    public:
        Pointer(int a, int b){
            x=a;
            y=b;
        }

        friend void distance(Pointer, Pointer);

        void display(void);
};

void Pointer :: display(void){
    // cout<<"Points are : "<<x<<"and "<<y<<"and there distance are:"<<distance(x.b, y.a)<<endl;
    cout<<"Points are : "<<x<<"and "<<y<<endl;
}

void distance(Pointer p1, Pointer p2){
    cout<<"Distance is"<<p1.y-p1.x<<endl;
    cout<<"Distance is"<<p2.y-p2.x<<endl;
}

int main()
{
     
    Pointer p1(3,2), p2(6,3);

    p1.display();
    p2.display();

    distance(p1,p2);


    return 0;
}