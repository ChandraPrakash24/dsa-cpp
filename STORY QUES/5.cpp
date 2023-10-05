// Each student from class 1 to 10 is given a distinct number. The physical Training (PT) instructs all the N students to stand in a straight line(a[]) in ascending order. But some primary class students don't follow the instructions and starts Tunning around. These students are made to sit aside in the ground.
// The PT instructor calls out random numbers (R) to check if the student with the number called is in the line or not. If the student with number R is already present in the line, give the position of the student in the line (index). If the student with number R is not prelient and sitting aside in the ground, give the position where this student should join in the line.
// Given N, a[], R, the task here is to find the position of the students as per the above instructions.
// Note: Position of the students in the line starts from 0.
// Example 1:
// Input:
// -> Value of N-6
// -> Value of R = 3
// -> a[] {1,2,3,4,7,9) Elements a[0]to a[N-1]
// output: 2
// if R = 6 then output = 4

#include<bits/stdc++.h>
using namespace std;

int whatPosition(int arr[], int n , int R){
    // MY approach
    // int i=0;
    // while(arr[i] <= R || i != n-1){
    //     ++i;
    //     if(arr[i] == R) return i;
    // }
    // return i-1;
    // Correct
    for(int i=0;i<n;i++){
        if(arr[i] >= R){
            return i;
        }
    }
    // return -1; // por present or not
    return n;
}

int main()
{
    int n, R; cin>>n>>R; int arr[n]; for(auto& i : arr) cin>>i;

    cout<<whatPosition(arr,n,R);
    
    return 0;
}

    
// 6 6
// 1 2 3 4 7 9
// 4

// 6 2
// 1 2 3 4 7 9
// 1