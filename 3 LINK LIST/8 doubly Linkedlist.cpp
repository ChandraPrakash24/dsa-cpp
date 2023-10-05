#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~node(){
        int val = this->data;
        this->next=NULL;
        delete this->next;
        cout<<"the node is deleted which has data "<<val<<endl;
    }
};


void insertAtHead(node* &head, node* &tail, int data){
    if (head==NULL)
    {
        node* temp = new node(data);
        head=temp;
        tail=temp;
        return;
    }
    else
    {
        node* temp = new node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;    
    }
}

void insertAtTail(node* &tail, node* &head, int data){
    if (tail==NULL)
    {
        node* temp = new node(data);
        tail=temp;
        // temp=tail;//correct but should not use
        // temp=head;//correct but should not use
        head=temp;
    }
    else
    {
        node* temp = new node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPosition(node* &head,node* &tail,int position,int data){

    if (position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }

    node* current = head;
    node* prevN = NULL;
    int cnt = 1;
    while (cnt<position)
    {
        prevN=current;
        current=current->next;
        cnt++;
    }

    if (current->next==NULL)
    {
        insertAtTail(tail,head,data);
        return;
    }

    node* temp = new node(data);
    temp->next=current;
    temp->prev=current->prev;
    prevN->next=temp;
    temp->prev=prevN;
}

void deleteNode(node* &head,node* &tail, int position){
    if (position==1)
    {
        node* temp;
        temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return;
    }
    else
    {
        node* current=head;
        node* prevN=NULL;
        int cnt = 1;
        while (cnt<position)
        {
            prevN=current;
            current=current->next;
            cnt++;
        }
        if (current->next==NULL)
        {
            tail=prevN;
        }
        prevN->next=current->next;
        current->prev=NULL;
        delete current;
        
    }
    
}

void printList(node* &head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } cout<<"NULL"<<endl;
}

void getLength(node* &head){
    node* temp=head;
    int cnt=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    } cout<<"length is: "<<cnt<<endl;
}

int main()
{
    node* tail = NULL;
    node* head = NULL;
    printList(head);
    insertAtHead(head,tail,10);
    printList(head);
    insertAtHead(head,tail,12);
    printList(head);
    insertAtHead(head,tail,13);
    printList(head);
    // getLength(head);

    // cout<<head->prev<<endl;
    cout<<head->data<<endl;
    // cout<<tail->next<<endl;
    cout<<tail->data<<endl;

    insertAtTail(tail,head,14);
    printList(head);
    insertAtTail(tail,head, 25);
    printList(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    insertAtPosition(head,tail,4,22);
    printList(head);

    // insertAtPosition(head,tail,1,22);
    // printList(head);

    // insertAtPosition(head,tail,5,22);
    // printList(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deleteNode(head,tail,4);
    // deleteNode(head,tail,1);
    // deleteNode(head,tail,6);

    printList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}