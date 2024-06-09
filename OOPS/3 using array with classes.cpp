#include<bits/stdc++.h>
using namespace std;

class Shop {
    int itemId[50];
    int itemPrice[50];
        int counter=0;
    public:
        // void initCounter(){
        //     counter = 0;
        // }
        void setItem(void);
        void getItem(void);
};

void Shop :: setItem(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        counter++;
        cin>>itemId[i];
        cin>>itemPrice[i];
    }
}

void Shop :: getItem(void){
    // int n = sizeof(itemPrice)/sizeof(itemPrice[0]); // --> 50
    for(int i=0;i<counter;i++){
        cout<<"Price for Item whit id "<<itemId[i]<<" is : "<<itemPrice[i]<<endl;
    }
}

int main()
{
     
    Shop dukkan;
    // dukkan.initCounter();
    dukkan.setItem();
    dukkan.getItem();   

    Shop bazzar;
    // bazzar.initCounter();
    bazzar.setItem();
    bazzar.getItem();   

    return 0;
}