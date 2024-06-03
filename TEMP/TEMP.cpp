#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }

    int first = s.top();
    s.pop();
    insert(s,top);
    s.push(first);

} 

void reverceStack(stack<int> &s){

    if(s.size() == 1){
        return;
    }

    int top = s.top();
    s.pop();
    reverceStack(s);
    insert(s,top);    
}

int main()
{
    stack<int> s;

        // Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    stack<int> temp = s;

    cout<<"Orignal Stack: "<<endl;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
        cout << endl;

    // Delete middle element
    reverceStack(s);
    // deleteMiddleElement(s,3);

    cout << "Stack after deleting middle element: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}