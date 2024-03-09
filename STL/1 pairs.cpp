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


    // Assign vector 
    vector<int> v; 
  
    // fill the vector with 10 five times 
    v.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after clear(): " << v.size(); 
  
    // two vector to perform swap 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 


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