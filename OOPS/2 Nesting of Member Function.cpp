// Nesting of Member Function
#include<bits/stdc++.h>
using namespace std;

class Binary {
    string s;
    void check_binary(void); // only function of the class where able to acces this
    public:
        void setData(void);
        void onceCompliment(void);
        void displayData(void);
};

void Binary :: setData(void){
    cout<<"Enter Binary No: "<<endl;
    cin>>s;
}

void Binary :: check_binary(void){
    for(int i=0;i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Enter valid Binary Number"<<endl;
            break;
        }
    }
}

void Binary :: onceCompliment(void){
    check_binary(); // nesting of member function
    for(auto& c : s){
        // if(c == '0') c == '1';
        // else c == '0';
        c == '0' ? c = '1' : c = '0';
    }
}

void Binary :: displayData(void){
    for(auto& c : s){
        cout<<c;
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.setData();
    // b.check_binary();
    b.onceCompliment();
    b.displayData();

    return 0;
}