#include<bits/stdc++.h>
using namespace std;

int main()
{

    // DECLERATION

    vector<int> v; //creatates empty container {}

    v.push_back(1); // {1}
    v.emplace_back(2); //same faster then push back {1,2}

    vector<pair<int,int>> v2;

    v2.push_back({1,2}); // {1,2} curly bracess must
    v2.emplace_back(3,4); // {1,2},{3,4} no need of curly bracess

    vector<int> v3(5,100); //{100----100}
    vector<int> v4(10); //only size declare which is not fixed

    vector<int> v5(v3); // copy elemntes of v3 in another vector v5


    //     ITERATION


    vector<int> v6 = {1,2,3,4,5,6};

    vector<int>::iterator it = v6.begin(); //hold addres of v6 index 0

    // v6.begin(); // not usable or cout<< able

    cout<<*(it)<<""<<endl; //1
    it++;

    cout<<*(it)<<endl; //2
    it+= 2;

    cout<<*(it)<<endl; //4

    /* vector<int>::iterator */ it = v6.end(); //// point after the last value never usable

    // vector<int>::iterator it = v6.rend(); // point before the first value never usable

    // vector<int>::iterator it = v6.rbegin(); // point at the last element and iterate back word even though it++

    cout<<v6[0]<<" "<<v6.at(1)<<endl; //like an array

    cout<<v6.back()<<endl; // print last elemet data

    // LOOPING

    for(vector<int>::iterator it2 = v6.begin(); it2 != v6.end() ; it2++){
        cout<<*(it2)<<" ";
    } cout<<endl;

    for(auto it3 = v6.begin(); it3 != v6.end() ; it3++){
        cout<<*(it3)<<" ";
    } cout<<endl;

    for(auto it4 : v6){
        cout<<it4<<" ";
    } cout<<endl;


    //         DELETION in a VECTOR


    // v6.erase(v6.begin());
    // for(vector<int>::iterator it5 = v6.begin(); it5 != v6.end(); it5++){
    //     cout<<*(it5)<<" ";
    // } // {1 2 3 4 5 6 } -> {2 3 4 5 6}

    // v6.erase(v6.begin() + 1);
    // for(auto it6 = v6.begin(); it6 != v6.end(); it6++)
    // {
    //     cout<<*(it6)<<endl;
    // } // {1 2 3 4 5 6 } -> {1 3 4 5 6}

    // we want to remove 2,3,4
    v6.erase(v6.begin()+1,v6.begin()+4); //[start,end) start included end not alwayse point to one forword position
    for(auto it7 : v6 ){
        cout<<it7<<" ";
    } // {1 2 3 4 5 6 } -> {1 5 6}


    //       INSERTION


    vector<int> v7(2, 100); // {100,100}
    v7.insert(v7.begin(),200); // {200,100,100}
    v7.insert(v7.begin() + 2,300); // 200,100,300,100} //begin + 2 ke pahale

    v7.insert(v7.begin()+3,4,111); // 200,100,111,111,111,111,300,100}

    for(auto it8 : v7){
        cout<<it8<<" ";
    } cout<<endl;



    // COPYING one vector to another


    vector<int> v8(2,800); // {800,800}
    v7.insert(v7.begin(),v8.begin(),v8.end()); // {800 800 200 100 300 111 111 111 111 100}

    for(auto it8 : v7){
        cout<<it8<<" ";
    } cout<<endl;


    // UTILITY

    vector<int> v9 = {10,11}; // {10 11}
    
    for(auto it9 : v9){
        cout<<it9<<" ";
    }cout<<endl;

    v9.push_back(12); //{10 11 12}
    
    for(auto it9 : v9){
        cout<<it9<<" ";
    }cout<<endl;
    
    v9.pop_back(); //{10 11}
    
    for(auto it9 : v9){
        cout<<it9<<" ";
    }cout<<endl;

    //SIZE
    cout<<v9.size();

    //SWAP
    vector<int> v10 = {10,20};
    vector<int> v11 = {30,40};
    
    v10.swap(v11); // v10-> {30,40} , v11-> {10,20}

    //CLEAR //delete entire vector

    vector<int> v12 = {22,33};
    v12.clear();

    // isEmpty
    cout << v12.empty(); // return true or false

    return 0;
}