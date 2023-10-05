#include<iostream>
using namespace std;

void searchHome(int src,int dest){
    
    cout<<"source is "<<src<<endl;
    // base casae
    if (src == dest)
    {
        cout<<"Pochgaya"<<endl;
        return;
    }
    
    // proccesing 
    src++;

    // recursive relation
    searchHome(src,dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    searchHome(src,dest);
    
    return 0;
}