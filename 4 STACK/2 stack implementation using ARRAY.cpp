#include<iostream>
using namespace std;

class stack{

    public:
     int *arr;
     int size;
     int top;

     stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if (top==size-1)
        {
            cout<<"STACK IS FULL"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]= element;
        }
        cout<<"Element "<<element<<" is pushed in stack"<<endl;
    }

    void pop(){
        if (top==-1)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else
        {
            top--;
            cout<<"Element is poped"<<endl;
        }
    }

    int peek(){
        if (top!=-1)
        {
            cout<<"top is : "<<arr[top]<<endl;
            return arr[top];
        }
        else
        {
            cout<<"STACK is empty so no peek of top: "<<endl;
            return 0;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};


int main()
{
    stack s(5);

    s.push(10);
    s.push(11);
    s.push(10);
    s.push(11);
    s.push(10);
    s.push(11);
    s.push(11);
    s.pop();
    s.peek();
    // cout<< s.isEmpty();

    if (s.isEmpty())
    {
        cout<<"empty mere dost"<<endl;
    }
    else
    {
        cout<<"not empty mere dost"<<endl;
    }
    

    return 0;
}

// #include<iostream>
// using namespace std;

// class stack{

//     public:
//     int *arr;
//     int size;
//     int top;

//     stack(int size){
//         this->size=size;
//         arr = new int[size];
//         top = -1;   
//     }

//     void push(int element){
//         if (top==size-1)
//         {
//             cout<<"STACK OVERFLOW"<<endl;
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top]=element;
//         } cout<<"pushed "<<element<<" into stack"<<endl;
//     }

//     void pop(){

//         if (top>-1)
//         {
//             top--;
//             return;
//         }
//         else
//         {
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//     }

//     int peek(){
//         if (top>-1)
//         {
//             cout<<arr[top]<<endl;
//             return 0;
//         }
//         else
//         {
//             cout<<"Stack is Empty"<<endl;
//         }
        
//     }
//     bool isEmpty(){

//         if (top==-1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
//     }
// };


// int main()
// {
//     stack s(5);

//     s.push(10);
//     // s.push(11);
//     // s.push(10);
//     // s.push(11);
//     // s.push(10);
//     // s.push(11);
//     // s.push(11);
//     s.pop();
//     s.peek();
//     // cout<< s.isEmpty();

//     if (s.isEmpty())
//     {
//         cout<<"empty mere dost"<<endl;
//     }
//     else
//     {
//         cout<<"not empty mere dost"<<endl;
//     }

//     return 0;
// }