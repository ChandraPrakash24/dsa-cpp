#include<bits/stdc++.h>
using namespace std;

bool isLucky(int current_position, int current_pass){
    if(current_position < current_pass) return true;
    if((current_position % current_pass) == 0) return false;

    return isLucky((current_position - current_position/current_pass),current_pass+1);

}

int main()
{
    if (isLucky(7,2)) cout<<7<<" is lucky"<<endl;
    else cout<<7<<" is NOT lucky"<<endl;

    if (isLucky(9,2)) cout<<9<<" is lucky"<<endl;
    else cout<<9<<" is NOT lucky"<<endl;

    return 0;
}