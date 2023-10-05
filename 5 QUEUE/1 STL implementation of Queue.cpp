#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(11);
    cout<<q.front()<<endl;
    q.push(12);
    cout<<q.front()<<endl;
    q.push(13);
    cout<<q.front()<<endl;

    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();
    cout<<q.size()<<endl;

    cout<<q.empty()<<endl;
    
    return 0;
}