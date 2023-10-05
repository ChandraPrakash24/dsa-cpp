//  list is also a container simlear to vector but it provide alwaso FRONT Operationn implemeneted by doubly linkedlist less time complexity

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls = {10,20};   

    ls.push_back(30);
    ls.emplace_back(40);

    ls.push_front(50); // use in replace of insert
    ls.emplace_front(60);

    for(auto it = ls.begin(); it != ls.end(); it++){
        cout<<*(it)<<" ";
    } // { 60 50 10 20 30 40 }

    // rest of the function are same as the vector
    //begin, end, inser, size, swap, empty

    return 0;
}