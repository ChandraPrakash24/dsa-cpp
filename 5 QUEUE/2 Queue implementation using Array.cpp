// #include<iostream>
// using namespace std;

// #define size 5

// class queue{

//     int* arr;
//     int front;
//     int rear;

//     public:

//     queue(){
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void push(int val){
//         if (front == 0 && rear == size - 1)
//         {
//             cout<<"Queue is Overflowed"<<endl;
//             return;
//         }
//         else{
//             if (rear== -1)
//             {
//                 arr[rear]=val;
//                 rear++;
//                 front++;
//                 return;
//             }
//             else
//             {
//                 arr[rear]=val;
//                 rear++;
//             }
//         }
//     }

//     void pop(){
//         if (front == -1)
//             {
//                 cout<<"Queue is empty"<<endl;
//                 return;
//             }
//         else
//         {
//             arr[front] = -1;
//             front++;
//         }
//     }

//     void peek(){
//         if (front == -1)
//             {
//                 cout<<"Queue is empty"<<endl;
//                 return;
//             }
//         else
//         {
//             cout<<"front is: "<<arr[front]<<endl;
//         }
//     }

//     bool isEmpty(){
//         if (front == - 1 || front>rear)
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
//     queue q;

//     q.push(10);
//     q.push(11);
//     // q.push(12);

//     cout<<q.isEmpty()<<endl;
//     q.peek();
//     q.pop();
//     q.peek();
//     cout<<"is empty: "<<q.isEmpty()<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Queue {
    
//     int* arr;
//     int qfront;
//     int rear; 
//     int size;
    
// public:
//     Queue() {
//         size = 100001;
//         arr = new int[size];
//         qfront = 0;
//         rear = 0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(qfront == rear) {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(int data) {
//         if(rear == size)
//             cout << "Queue is Full" << endl;
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     int dequeue() {
//         if(qfront == rear) {
//             return -1;
//         }
//         else
//         {	int ans = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if(qfront==rear){
//                 qfront = 0;
//                 rear = 0;
//             }
//          return ans;
//         }
//     }

//     int front() {
//         if(qfront == rear) {
//             return -1;
//         }
//         else
//         {
//             return arr[qfront];
//         }
//     }
// };

// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.dequeue();
//     q.front();
//     cout<<q.isEmpty();
//     return 0;
// }

#include<iostream>
using namespace std;
#define size 5 

int arr[size];
int front = -1;
int rear = -1;

    void enqueue(int data){

        //to diplay which element is enqued.
        cout<<data<<" -> is pushed into Queue."<<endl;
        
        //main concept
        if (rear == size-1)
        {
            cout<<"Queue Overflow"<<endl;
        }
        else if (rear == -1)
        {
            rear++;
            front++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear]= data;
        }
    }

    void dequeue(){
        //to diplay which element is dequed.
        if (arr[front] == 0)
        {
           cout<<"queue is empty so nothing will be dequed."<<endl;
        }
        else
        {
           cout<<arr[front]<<" is dequed."<<endl;
        }
        

        //main concept
        if (front==-1 )
        {
            cout<<"Queue Underflow"<<endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }

    void peek(){
        cout<<"front is : "<<arr[front]<<endl;
        return;
    }

    void display(){
        // make temp pointer wile displying any data structure
        int trav = front;
        cout<<"Queue is : ";
        if (front == -1)
        {
            cout<<"Queue is empty."<<endl;
        }
        else
        {
            while (trav <= rear)
            {
                cout<<arr[trav]<<" ";
                trav++;
            } cout<<endl;
        }
    }

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    display();
    peek();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    peek();
    return 0;
}