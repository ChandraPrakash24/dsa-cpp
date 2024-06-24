#include<bits/stdc++.h>
using namespace std;

int bestTimeToBuyAndSell(int * price, int start, int end){
    if(start >= end) return 0;

    int maxProfit=0;
    for(int i=start; i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(price[j] > price[i]){
                int current_max = price[j] - price[i] + bestTimeToBuyAndSell(price, start, i-1) + bestTimeToBuyAndSell(price, j+1, end);
                maxProfit = max(maxProfit, current_max);
            }
        }
    }
    return maxProfit;
}

int main()
{
    int arr[] = {1,5,3,1,2,8}; // 11
    int n=6;
    // int arr[] = {1,5,3,8,12}; // 13
    // int n=5;

    cout<<bestTimeToBuyAndSell(arr,0,n-1);

    return 0;
}
