//ARITHEMATIC
//incriment of pointer to next addres only in array

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3]= {1,6,8};
//     int *ptr;
//     ptr = &arr[0];
//     cout<<*ptr<<endl;
//     ptr++;
//     ptr++;
//     cout<<*ptr<<endl;
//     return 0;
// }

//dicriment


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]= {1,3,5,7,9};
//     int *ptr;
//     ptr = &arr[4];
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<*ptr<<endl;
//         ptr--;
//     }
    
//     return 0;
// }


//integer add to a pointer

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[7]={2,3,4,6,7,5,8};
//     int *ptr;
//     ptr = &arr[0];
//     int n=2;
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<*ptr<<endl;
//         ptr+=n; //skip 1 digit//siped digit garbage value printed at last
//     }
    
//     return 0;
// }

//integer subtract to a pointer

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[7]={2,3,4,6,7,5,8};
//     int *ptr;
//     ptr = &arr[6];
//     int n=2;
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<*ptr<<endl;
//         ptr= ptr - n; //skip 1 digit//skiped digit garbage value printed at last
//     }
    
//     return 0;
// }

// PRICIDANCE

//POINTER TO POINTER

// #include<iostream>
// using namespace std;

// int main()
// {
//     int var,*ptr1, **ptr2;
//     var = 8;
//     ptr1=&var;
//     ptr2=&ptr1;
//     cout<<var<<endl;
//     cout<<*ptr1<<endl;
//     cout<<**ptr2<<endl;
//     return 0;
// }

//array pointer


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[3]={1,2,3};
//     int *ptr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         ptr[i]=&a[i];
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<*ptr[i]<<endl;
//     }
//     return 0;
// }

//call by value

// #include<iostream>
// using namespace std;

// void func(int x){
//     x=200;
//     cout<<"in func x is: "<<x<<endl;
// }

// int main()
// {
//     int x = 100;
//     func(x);
//     cout<<"here x is: "<<x<<endl;
//     return 0;
// }


//call by refference


#include<iostream>
using namespace std;

void func(int *x){
    *x=200; 
    cout<<"in func x is:"<<*x<<endl;
}


int main()
{
    int x= 100;
    func(&x);
    cout<<"here x is now:"<<x<<endl;
    return 0;
}