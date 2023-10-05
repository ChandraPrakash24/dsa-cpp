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

//     ~node(){
//         int val = this->data;
//         if (this->next!=NULL)
//         {
//             this->next=NULL;
//             // delete this; //wrong
//             delete this->next;
//         }
//         cout<<"memeory is free fornode with data "<<val<<endl;
//     }
// };

// void insertAtHead(node* &head, int data){
//     node* temp = new node(data);
//     if (head==NULL)
//     {
//         head=temp;
//         return;
//     }
//     temp->next=head;
//     head=temp;
// }

// void insertAtTail(node* &tail,int data){
//     node* temp = new node(data);
//     if(tail==NULL)
//     {
//         tail=temp;
//         return;
//     }
//     tail->next=temp;
//     tail=temp;
// }

// void insertAtPositon(node* &head,node* &tail,int position , int data){
//     node* nodeToInsert = new node(data);
//     node* temp;
//     temp=head;
//     int cnt = 1;
//     //at start
//     if (position==1)
//     {
//         insertAtHead(head,data);
//         return;
//     }
//     while (cnt<position-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     //last
//     if (temp->next==NULL)
//     {
//         insertAtTail(tail,data);
//         return;
//     }
    
//     //middle
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;

// }

// void deleteNode(node* &head,node* &tail,int position){
//     node* current = head;
//     node* prev = NULL;

//     if (position==1)
//     {
//         node* temp = head;
//         head=head->next;
//         // temp->next=NULL;
//         delete temp;
//         return;
//     }

//     int cnt=1;
//     while (cnt<position)
//     {
//         prev=current;
//         current=current->next;
//         cnt++;
//     }
//     // current->next=NULL;
//     if (current->next==NULL)
//     {
//        tail=prev;
//     }
    
//     prev->next=current->next;
//     delete current;
// }

// void printList(node* head){
//     node* temp = head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }cout<<"NULL"<<endl;
    
// }

// int main()
// {
//     node* head = NULL;
//     node* tail = NULL;
//     node* node1 = new node(10);
//     cout<<node1->data<<endl;  
//     // cout<<node1->next<<endl;  
//     head = node1;
//     tail = node1;

//     // insertAtHead(head,12);
//     // printList(head);
//     // insertAtHead(head,15);
//     // printList(head);
//     insertAtTail(tail,12);
//     printList(head);
//     insertAtTail(tail,15);
//     printList(head);
//     // insertAtPositon(head,tail,1,22);
//     // printList(head);
//     // insertAtPositon(head,tail,3,22);
//     // printList(head);
//     insertAtPositon(head,tail,4,22); //run seprately
//     printList(head);

//     cout<<head->data<<endl;
//     cout<<tail->data<<endl;

//     // deleteNode(head,tail,1);
//     // printList(head);
//     // cout<<head->data<<endl;
//     // cout<<tail->data<<endl;


//     // deleteNode(head,tail,3);
//     // printList(head);
//     // cout<<head->data<<endl;
//     // cout<<tail->data<<endl;
    
//     deleteNode(head,tail,4);
//     printList(head);
//     cout<<head->data<<endl;
//     cout<<tail->data<<endl;

//     return 0;
// }


//PRACTICE


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

void insertAtHead(node* &head, int data){
        node* temp = new node(data);
        if (head==NULL)
        {
            head=temp;
            return;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }

void printList(node* head){
        node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        } cout<<"NULL"<<endl;
        
    }

void insertAtLast(node* &head,int data){
        node* temp = new node(data);
        if (head==NULL)
        {
            head=temp;
            return;
        }
        else
        {
            node* trav = head;
            while (trav->next != NULL)
            {
                trav=trav->next;
            }
            trav->next=temp;
        }
    }

void insertAtPosition(node* &head,int data,int position){
        node* newnode = new node(data);
        if (head==NULL)
        {
            head=newnode;
            return;
        }
        else if (position==1)
        {
            newnode->next=head;
            head=newnode;
            return;
        }
        else{
            // int count = 1;
            // node* nodeToInsert = new node(data);
            node* temptrav = head;
            // traverse till the current (pos-1)th node
            while (--position > 1)
            {
                // temptrav = head;
                temptrav=temptrav->next;
                // count++;
            }
            // if (temptrav->next=NULL)
            // {
            //     temptrav->next=nodeToInsert;
            // }
            // else{
            //     nodeToInsert->next=temptrav->next;            
            //     temptrav->next=nodeToInsert;
            // }
            newnode->next = temptrav->next;
            temptrav->next=newnode;
    }
}

void deleteNode(node* &head,int position){
            if (position == 1)
            {
                node* temp = head;
                head=head->next;
                temp->next = NULL;
                delete(temp);
                return;
            }
            node* current = head;
            node* prev = NULL;
            while (--position >=1)
            {
                prev = current;
                current = current->next;
            }
            
            if (current->next == NULL)
            {
                prev->next = NULL;
                delete(current);
                return;
            }
            else
            {
                prev->next=prev->next->next;
                current->next = NULL;
                delete(current);
            }
            
            
        }
    

int main()
{
    node* head = NULL;
    // insertAtHead(head,10);
    // insertAtHead(head,11);

    // printList(head);

    insertAtLast(head,10);
    insertAtLast(head,11);
    insertAtLast(head,12);

    // printList(head);

    // insertAtPosition(head,111,0);//kuch bhe
    insertAtPosition(head,101,1); //first
    insertAtPosition(head,102,3); //mid
    insertAtPosition(head,103,6); //last
    // insertAtPosition(head,104,8); //last
    printList(head);

    // deleteNode(head,1);
    deleteNode(head,3);
    // deleteNode(head,6);

    printList(head);


    return 0;
}