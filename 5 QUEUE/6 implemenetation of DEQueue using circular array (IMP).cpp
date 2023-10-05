#include<iostream>
using namespace std;
// #define size 5

class dequeue{
    int *arr;
    int size;
    int r;
    int f;

    public:
    dequeue(int cap){
        size = cap;
        arr = new int[size];
        f = -1;
        r = -1;
    }

    void insertFromFront(int x){
        if((f == 0 && r == size -1) || (f == r + 1))
        {
            cout<<"Queue is FULL"<<endl;
            return;
        }
        else if (r == -1 && f == -1)
        {
            f = 0;
            r = 0;
            arr[f] = x;
            return;
        }
        else if (f == 0)
        {
            f = size - 1;
            arr[f] = x; 
            return;
        }
        else
        {
            f--;
            arr[f] = x; 
        }
    }

    void insertFromRear(int x){
        if ((f == 0 && r == size-1) || (f == r + 1))
        {
            cout<<"Queue is FULL"<<endl;
        }
        else if (f == -1 && r == -1)
        {
            f = r = 0;
        }
        else if (r == size - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        arr[r]=x;
    }

    void deleteFromFront(){
        if (r == -1 && f == -1)
        {
            cout<<"Queue is EMPTY"<<endl;
            return;
        }
        else if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f = size - 1)
        {
            f = 0;
        }
        else
        {
            // f = (f + 1)%size;
            f++;
        }
    }

    void deleteFromRear(){
        if (f == -1 && r == -1)
        {
            cout<<"Queue is EMPTY"<<endl;
        }
        else if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (r == 0)
        {
            r = size - 1;
        }
        else
        {
            r--;
        }
    }

    void diplay(){
        int temp = f;

        if (r == -1 && f ==-1)
        {
            // cout<<"Queue is EMPTY"<<endl;
        }
        else
        {   
            while (temp != r){
                    cout<<arr[temp]<<" ";
                    temp = (temp + 1)%size;
                } cout<<arr[r]<<endl;
        }
        
        // int i=f;
        // if( f<=r )
        // {
        //         while(i<=r)
        //                 printf("%d ",arr[i++]);
        // }
        // else
        // {
        //         while(i<=size-1)
        //                 printf("%d ",arr[i++]);
        //         i=0;
        //         while(i<=r)
        //                 printf("%d ",arr[i++]);
        // }
        // printf("\n"); cout<<arr[r]<<endl;
    }  
};

int main()
{
    dequeue q(5);

    q.insertFromFront(101);
    q.insertFromFront(11);
    q.insertFromRear(12);
    q.insertFromRear(13);
    q.insertFromFront(14);
    q.diplay();
    // q.insertFromFront(15);
    q.deleteFromFront();
    q.diplay();
    q.deleteFromRear();
    q.diplay();

    return 0;
}