// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// void printLinklist(Node* &head){
//     Node* temp = head;

//     while (temp != NULL)
//     {
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     printLinklist(head);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1 -> next<<endl;

//     insertAtHead(head , 11);
//     printLinklist(head);

//     insertAtHead(head , 12);
//     printLinklist(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };

// // void inseartAtBegnning(node* &head, int d){
// //     node* temp = new node(d);
// //     head = temp->next;
// //     temp=head;
// // }
// void inseartAtBegnning(node* &head, int d){
//     node* temp = new node(d);
//     temp -> next = head;
//     head = temp;
// }
// void printList(node* head){
//     while (head!=NULL)
//     {
//         cout<<head->data<<" -> ";
//         head = head->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main()
// {
//     node* n1 = new node(10);
//     node* head=n1;
//     printList(head);  

//     cout<<endl;

//     inseartAtBegnning(head, 11);
//     printList(head);  

//     cout<<endl;
//     inseartAtBegnning(head, 12);
//     printList(head);  


//     return 0;
// }


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void insertAtHead(node* &head, int data)
// {
//     if (head=NULL)
//     {
//         node* temp = new node(data);
//         head=temp;
//     }
//     else
//     {
//         node* temp = new node(data);
//         temp->next=head;
//         head=temp;
//     }
// }

// void printList(node* head){
//     while (head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;    
//     }
    
// }

// int main()
// {
//     node* head = NULL;
//     insertAtHead(head,10);
//     printList(head);
//     insertAtHead(head,11);
//     printList(head);
//     insertAtHead(head,12);
//     printList(head);
//     return 0;
// }

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this ->data=data;
        this ->next=NULL;
    }

};

void insertAtBegnning(node* &head, int data){
    node* temp = new node(data);
    temp->next=head;
    head=temp;
}

void printList(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        // cout<<head->next<<endl;
        head=head->next;
    } cout<<"NULL"<<endl;
}

int main()
{
    node* n1 = new node(10);
    node* head = n1;
    printList(head);
    insertAtBegnning(head,11);
    printList(head);
    insertAtBegnning(head,12);
    printList(head);
    return 0;
}