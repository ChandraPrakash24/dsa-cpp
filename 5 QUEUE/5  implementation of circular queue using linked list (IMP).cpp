#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* front;
    node* rear;
        

    node(){
        data;
        next;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }

        void enQueue(int data){
        node* temp =new node(data);
        // node* front = NULL;
        // node* rear = NULL;
        if (front->next == NULL)
        {
            front = rear = temp;
            rear->next = front;
            return;
        }
        else
        {
            rear->next = temp;
            rear = temp;
            rear->next = front;
        }
    }
    
    void deQueue(){
        if (front == NULL)
        {
            cout<<"Queue is Underflow"<<endl;
        }
        else if (front == next)
        {
            node* tempToDelete = front;
            front = rear = NULL;
            delete(tempToDelete);
        }
        else
        {
            // node* nodeToDelete = front;
            front = front->next;
            // nodeToDelete->next=NULL;
            rear->next = front;
            // delete(nodeToDelete);
        }
    }

    void display(){
        // node* temp = front;
        cout<<front->data<<endl;
        // do{
        //     cout<<temp->data<<endl;
        //     temp = temp->next;
        // } while (temp != rear); cout<< rear->data; cout<<endl;
        
    }
    // void display(){
    //     node* temp = front;
    //     while (temp != NULL)
    //     {
    //         cout<<temp->data<<" ";
    //         temp = temp->next;
    //     } cout<<endl;
        
    // }
};


int main()
{
    node* front = NULL;
    node*    rear = NULL;
    node n;
    n.enQueue(10);
    // n.enQueue(10);
    // n.enQueue(10);
    n.display();
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
// 	int data;
// 	struct node* next;
// };
// struct node *f = NULL;
// struct node *r = NULL;
// void enqueue(int d) //Insert elements in Queue
// {
// 	struct node* n;
// 	n = (struct node*)malloc(sizeof(struct node));
// 	n->data = d;
// 	n->next = NULL;
// 	if((r==NULL)&&(f==NULL))
// 	{
// 		f = r = n;
// 		r->next = f;
// 	}
// 	else
// 	{
// 		r->next = n;
// 		r = n;
// 		n->next = f;
// 	}
// } 
// void dequeue() // Delete an element from Queue
// {
// 	struct node* t;
// 	t = f;
// 	if((f==NULL)&&(r==NULL))
// 		printf("\nQueue is Empty");
// 	else if(f == r){
// 		f = r = NULL;
// 		free(t);
// 	}
// 	else{
// 		f = f->next;
// 		r->next = f;
// 		free(t);
// 	}
	
	
// }
// void print(){ // Print the elements of Queue
// 	struct node* t;
// 	t = f;
// 	if((f==NULL)&&(r==NULL))
// 		printf("\nQueue is Empty");
// 	else{
// 		do{
// 			printf("\n%d",t->data);
// 			t = t->next;
// 		}while(t != f);
// 	}
// }
// int main()
// {
// 	int opt,n,i,data;
// 	printf("Enter Your Choice:-");
// 	do{
// 		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit");
// 		scanf("%d",&opt);
// 		switch(opt){
// 			case 1:
// 				printf("\nEnter the number of data");
// 				scanf("%d",&n);
// 				printf("\nEnter your data");
// 				i=0;
// 				while(i<n){
// 					scanf("%d",&data);
// 					enqueue(data);
// 					i++;
// 				}
// 				break;
// 			case 2:
// 				print();
// 				break;
// 			case 3:
// 				 dequeue();
// 				break;
// 			case 0:
// 				break;
// 			default:
// 				printf("\nIncorrect Choice");
			
// 		}
// 	}while(opt!=0);
// return 0;
// }