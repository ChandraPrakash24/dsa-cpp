// null pointer

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *var;
//     var = NULL;
//     cout<<*var<<endl;
//     return 0;
// }

// void pointer

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 6;
//     void *ptr;
//     ptr = &a;
//     cout<<*(int *)ptr<<endl; //type cast
//     return 0;
// }


//wild pointer //when not any addres is assigned

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *ptr;
//     cout<<*ptr<<endl; //it can cause segnentation error
//     return 0;
// }


// dangling pointer //when ptr is pointing at free memory after deallocation of its memory

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *ptr=(int *)malloc(sizeof(int)); //dynamicaly allocating memory using malloc function 

//     int a= 7;
//     ptr = &a;
//     free(ptr);
//     cout<<*ptr<<endl;
//     return 0;
// }