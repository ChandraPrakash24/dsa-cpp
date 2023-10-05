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

    ~node(){
        int val=this->data;
        this->next=NULL;
        delete this->next;
        cout<<"the node has been deleted whose data is "<<val<<endl;
    }
};

void insertAtPosition(node* &tail,int element,int data){
    if (tail==NULL)
    {
        node* temp= new node(data);
        tail=temp;
        temp->next=temp;
        // tail=tail->next;
    }
    else
    {
       node* current = tail;

       while (current ->data != element)
       {
            current=current->next;
       }
       
       node* temp = new node(data);
       temp->next=current->next;
       current->next=temp;
    }
}

void deleteNode(node* &tail, int data){
    //   if (tail->next=NULL)
    //   {
    //     node* current = tail;
    //     if (current==tail)
    //     {
    //         tail=NULL;
    //         cout<<"now lest is empty"<<endl;
    //         // return;
    //     }
    //   }
       
      
    if (tail==NULL)
    {
        node* temp = new node(data);
        temp = tail;
        return;
    }
   

    else if (data == tail->data)
    {
        node* temp = tail;
        node* current = tail;
        
        
        while (temp->next != tail)
        {
            temp=temp->next;
        }
      
        tail=tail->next;
        temp->next=tail;
        current->next=NULL;
        delete current;
    }
    else
    {
        node* current = tail;
        node* previous = NULL;
        
        while (current->data != data){
            previous=current;
            current=current->next;
        }  



        previous->next = current->next;
        
        
        
        current->next=NULL;
        delete current;
    }
}

    void printList(node* tail){
    node* temp = tail;
    
    
    do
    {
        cout<<tail->data<<"->";
        tail=tail->next;

    } while (tail!=temp); cout<<"NULL"<<endl;
}



int main()
{
    node* tail = NULL;
    insertAtPosition(tail,5,3);
    printList(tail);
    insertAtPosition(tail,3,4);
    printList(tail);
    insertAtPosition(tail,4,5);
    printList(tail);
    insertAtPosition(tail,3,15);
    printList(tail); 
    deleteNode(tail,3);
    // deleteNode(tail,15);
    printList(tail);

    cout<<"tail is: "<<tail->data<<endl;
    // insertAtPosition(tail,3,15);
    // printList(tail);
    return 0;
}