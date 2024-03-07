#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    // p = make_pair(1,"abc"); 
    p = {1,"abcd"};

    // pair<int,string> p2 = p;

    cout<<p.first <<" "<<p.second<<endl;

    // p2.first = 2;
    // p2.second = "efg";

    // p.first = 4;
    // p.second = "hij";

    // cout<<p2.first <<" "<<p2.second<<endl;
    
    // cout<<p.first <<" "<<p.second<<endl;

    pair<int,string> &p2 = p;

    p2.first = 2;
    p2.second = "efg";
    cout<<p2.first <<" "<<p2.second<<endl;
    
    cout<<p.first <<" "<<p.second<<endl;


    // int arr1[] = {1,2,3}; // two sync array
    // int arr2[] = {4,5,6};

    //      OR

    // pair<int,int> p_arr[]; // incomplete typr is not allowed
    pair<int,int> p_arr[3];

    p_arr[0] = {1,4};
    p_arr[1] = {2,5};
    p_arr[2] = {3,6};

    for(auto& i : p_arr){ 
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }

    swap(p_arr[0],p_arr[2]);

    for(auto& i : p_arr){ 
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }


    pair<int,string> p_cin;

    // cin>>p_cin.first;
    // cin>>p_cin.second;

    cout<<p_cin.first<<" "<<p_cin.second;


    pair<string,int> p_cin2[3];

    for(auto& i : p_cin2){
        cin>>i.first>>i.second;
    }

        for(auto& i : p_cin2){ 
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }

    return 0;

}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     pair<int,int> p = {1,2};

//     cout<<p.first <<p.second<<endl;

//     pair<int,pair<int,int>> p2 = {1,{2,3}};
//     cout<<p2.first<<p2.second.second<<p2.second.first<<endl;

//     pair<int,int> arr[] = {{1,2}, {3,4},{5,6}};

//     cout<<arr[0].first  ;
//     cout<<arr[0].second<<endl;
//     return 0;
// }