#include<bits/stdc++.h>
using namespace std;

class Shop {
    private:
        int itemArr[10];
        int priceArr[10];
        int cnt;
    public:
        void counter(void) { cnt = 0;}
        void setItem(void);
        void displayItem(void);
};

void Shop :: setItem(void){
    // counter(); // reinitilization again and again
    cout<<"Enter id for "<<cnt + 1<<" item"<<endl;
    cin >> itemArr[cnt];
    cout<<"Enter price for "<<cnt + 1<<" item"<<endl;
    cin >> priceArr[cnt];
    cnt++;
}

void Shop :: displayItem(void){
    for(int i=0; i<cnt; i++){
        cout<<"For item "<< i+1 <<" Price is : "<<priceArr[i]<<endl;
    }
}

int main()
{
    Shop dukan;

    dukan.counter();    
    dukan.setItem();    
    dukan.setItem();    
    dukan.setItem();
    dukan.displayItem();

    return 0;
}