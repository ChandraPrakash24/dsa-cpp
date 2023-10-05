// NOT WORKING AFTER RUN GOES TO OUTPUTSECTION
// #include<iostream>
// using namespace std;

// class node{

//     public:
//     int data;
//     node* next; 

//     // node* top = NULL;

//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     ~node(){
//         int val = this->data;
//         this->next=NULL;
//         delete this->next;
//         cout<<"node is deleted which has data : "<<val<<endl;
//     }
// };

// class stack{

// //     node* top;

// // public:
// //     stack() { top = NULL; }

//     node* top = NULL;
//     public:


//     bool isEmpty(){
//         if (top==NULL)
//         {
//             cout<<"Stack Underflow"<<endl;
//             return;
//         }
//         else{
//             cout<<"Stack is not empty"<<endl;
//         }
//     }

//     void push(int data){
//         node* temp = new node(data);
//         temp->next=top;
//         top=temp;
//     }

//     void pop(){
//         if (isEmpty())
//         {
//             cout<<"Stack is Empty"<<endl;
//             return;
//         }
//         else
//         {
//             node* temp = top;
//             // temp=top;
//             top=top->next;
//             // temp->next=NULL;
//             delete temp;
//         }
//     }

//     int peek(){
//         cout<<"top is : "<<top->data<<endl;
//     }

// };

// int main()
// {
//     stack s;

//     // s.push(1);
//     // s.push(2);
//     // s.push(3);
//     s.isEmpty();
//     // s.pop();
//     s.peek();
    
//     return 0;
// }

#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next; 

    // node* top = NULL;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~node(){
        int val = this->data;
        this->next=NULL;
        delete this->next;
        cout<<"node is deleted which has data : "<<val<<endl;
    }
};

class stack{

    node* top = NULL;

    public:

    bool isEmpty(){
        if (top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return 1;
        }
        else{
            cout<<"Stack is not empty"<<endl;
            return 0;
        }
    }

    void push(int data){
        node* temp = new node(data);
        temp->next=top;
        top=temp;
    }

    void pop(){
        if (top==NULL)
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        else
        {
            node* temp = top;
            // temp=top;
            top=top->next;
            // temp->next=NULL;
            delete temp;
        }
    }

    int peek(){
        cout<<"top is : "<<top->data<<endl;
        return 0;
    }
};

int main()
{
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.isEmpty();
    s.pop();
    s.peek();
    
    return 0;
}
