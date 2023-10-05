#include<iostream>
using namespace std;
#define size 5

class circularQueue{
    int *arr;
    int front;
    int rear;


    public:

        circularQueue(){
            front = -1;
            rear = -1;
            arr = new int[size];
        }

    void enQueue(int value);
    void deQueue();
    void displayQueue();
    void peek();
};

void circularQueue:: enQueue(int value){
    if ((rear + 1) % size == front)
    {
        cout<<"Queue Overflowed"<<endl;
        return;
    }
    else if (rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }
    
    arr[rear] = value;
}

void circularQueue::deQueue(){
    if (front == -1)
    {
        cout<<"Queue Underflowed"<<endl;
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}

void circularQueue::displayQueue(){
    int trav = front;
    cout<<"Cirular Queue is : ";
    
    do{
        cout<<arr[trav]<<" ";
        trav = (trav + 1) % size;
    } while (trav != rear); cout<<arr[rear]; cout<<endl;
}

void circularQueue::peek(){
    cout<<arr[front]<<endl;
}

int main()
{
    circularQueue q;

    q.enQueue(10);
    q.enQueue(11);
    q.enQueue(12);
    q.enQueue(13);
    q.enQueue(14);
    q.displayQueue();
    q.peek();
    q.deQueue();
    q.deQueue();
    q.enQueue(15);
    q.enQueue(16);
    q.displayQueue();
    q.peek();

    return 0;
}