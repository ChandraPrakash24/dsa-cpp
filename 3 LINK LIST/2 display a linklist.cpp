#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printLinkList(Node* a){
    while (a != NULL)
    {
        cout<< a -> data<<endl;
        cout<< a -> next<<endl;
        a = a -> next;
    }
    
}

int main()
{   
    Node* head = new Node();
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* tail = new Node();

    head -> data = 2;
    head -> next = n1;
    n1 -> data = 3;
    n1 -> next = n2;
    n2 -> data =4;
    n2 -> next = tail;
    tail -> data = 5;
    tail -> next = NULL;

    printLinkList(head);

    return 0;
}

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void printLinkList(Node* a){
//     while (a != NULL)
//     {
//         cout<<a -> data<<"->";
//         a = a->next;
//     }
//     cout<<"NULL"<<endl;
   
// }

// int main()
// {
//     Node* head = new Node();
//     Node* n1 = new Node();
//     Node* n2 = new Node();
//     Node* tail = new Node();

//     head -> data = 2;
//     head -> next = n1;
//     n1 -> data = 3;
//     n1 -> next = n2;
//     n2 -> data = 4;
//     n2 -> next = tail;
//     tail -> data = 5;
//     tail -> next = NULL;

//     printLinkList(head);

//     return 0;
// }