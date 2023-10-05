// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//      CONSTRUCTOR

//     Node(int data){
//         this -> data = data;
//         this -> next = next;
//     } 

// };


// int main()
// {
//     Node* node1 = new Node(10); 
//     Node* node2 = new Node(11); 
//     Node* node3 = new Node(12); 
//     cout<< node1 -> data<<endl;
//     cout<< node2 -> data<<endl;
//     cout<< node3 -> data<<endl;
//     cout<< node1 -> next<<endl;
//     cout<< node2 -> next<<endl;
//     cout<< node3 -> next<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node (int data){
//         this -> data = data;
//         this -> next = next;
//     }


// };


// int main()
// {
    
//     Node* node1 = new Node(10);
//     cout<<node1 -> data<<endl;
//     cout<<node1 -> next<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data)
//     {
//         this -> data = data;
//         this -> next = NULL;
//     }

// };

// int main()
// {
//     Node* n1 = new Node(10);
//     cout<<n1 -> data<<endl;
//     cout<<n1 -> next<<endl;
//     Node* n2 = new Node(11);
//     cout<<n2 -> data<<endl;
//     cout<<n2 -> next<<endl;
//     Node* n3 = new Node(12);
//     cout<<n3 -> data<<endl;
//     cout<<n3 -> next<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void printList(node* a){
    while (a!= NULL)
    {
        cout<< a -> data<<"\t";
        cout<< a -> next<<endl;
        a = a -> next;
    }
    
}

int main()
{
    node* head = new node();
    node* n1 = new node();
    node* n2 = new node();
    node* tail = new node();

    head -> data = 1;
    head -> next = n1;
    n1 -> data = 2;
    n1 -> next = n2;
    n2 -> data = 3;
    n2 -> next = tail;
    tail -> data = 4;
    tail -> next = NULL;

    printList(head);

    cout<<" "<<endl;
    cout<<n2 -> next<<endl;
    cout<<tail-> next<<endl;

    return 0;
}

