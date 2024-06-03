#include<bits/stdc++.h>
using namespace std;

void deleteMiddleElement(stack<int> &s, int n){

    if(n == 1 || s.empty()){
        s.pop();
        return;
    }


    int top = s.top();
    s.pop();
    deleteMiddleElement(s,n-1);
    s.push(top);
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
    deleteMiddleElement(s,(s.size()+1)/2);
    // deleteMiddleElement(s,3);

    cout << "Stack after deleting middle element: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}