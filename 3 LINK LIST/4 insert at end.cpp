#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtEnd(node* &tail,int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = tail->next; //tail=temp
}

void printList(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* n1 = new node(10);
    node* tail = n1;
    node* head = n1;
    printList(head);
    insertAtEnd(tail,11);    
    printList(head);
    insertAtEnd(tail,12);    
    printList(head);
    
    return 0;
}