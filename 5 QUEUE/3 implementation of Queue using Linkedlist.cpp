#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
    
    node* front = NULL;
    node* rear = NULL;

class QueueOperations{ 
    public:

    void enque(int data){
        node* nodeToInserts = new node(data);
        // if (rear->next == NULL)
        // {
        //     cout<<"Queue is Overflowed"<<endl;
        // }
        if (front == NULL)
        {
            front = rear = nodeToInserts;            
        }
        else
        {
            rear->next = nodeToInserts;
            rear = nodeToInserts;
        }
    }

    void deque(){
        node* temp = front;
        if (front->next==NULL)
        {
            cout<<"Queue Underflow"<<endl;
        }
        else
        {
            front = front->next;
            delete(temp);
        }
    }

    void display(){
        node* temp = front;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        } cout<<endl;
        
    }

    void peek(){
        cout<<"front is: "<< front->data <<endl;
    }
};



int main()
{

    QueueOperations q;

    q.enque(10);
    q.enque(11);
    q.enque(12);
    q.enque(13);
    q.display();
    q.peek();
    q.deque();
    q.display();
    q.peek();
    
    return 0;
}