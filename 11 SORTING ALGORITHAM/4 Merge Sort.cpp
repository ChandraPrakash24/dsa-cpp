// // TC: O (n * log n)         S: O(n)
// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int>& arr, int l, int mid, int r){
//     //from back
//     // while(l>=0 && r>=0){

//     while(l<=mid && mid<=r){
//         if(arr[l] < arr[mid+1]) {arr[l] = arr[l++]; mid++; }
//         else arr[l] = arr[mid+1]; {mid++;}
//     }
//     // adding remanning element
//     int k = arr.size();
//     if(l<=mid){ 
//         while(l<=mid){ arr[k++]; }
//     }
//     if(mid<=r){ 
//         while(mid<=r){ arr[k++]; }
//     }
// }

// void mergeSort(vector<int>& arr,int l,int r){
//     if(l<r){
//         int mid = (l + r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }

// int main()
// {
//     int n; cin>>n; vector<int> arr(n); for(auto& i : arr) cin>>i; 

//     mergeSort(arr,0,n-1);

//     for(auto& i : arr) cout<<i;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    vector<int> temp(r - l + 1);
    int i = l, j = mid + 1, k = 0;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (int k = l; k <= r; k++) {
        arr[k] = temp[k-l];
    }
    // for (int k = l, p = 0; k <= r; k++) {
    //     arr[k] = temp[p++];
    // }
}

void mergeSort(vector<int>& arr, int l, int r){
    if (l < r){
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& i : arr)
        cin >> i;

    mergeSort(arr, 0, n-1);

    for (auto& i : arr)
        cout << i << " ";

    return 0;
}