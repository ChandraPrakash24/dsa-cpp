#include<bits/stdc++.h>
using namespace std;

int  MaxAppEl(int* left, int l, int* right, int r) {

    vector<int> freq(100, 0);
    int lI = 0, rI = 0;

    while (!(lI >= l && rI >= r)) {
        if (lI < l) freq[left[lI]] = 1;
        if (rI < r) freq[right[rI]] = -1;
        lI++;
        rI++;
    }

    int res = 0, resIndex = freq[0] == 1 ? 1 : 0;
    for (int i = 0; i < 100; i++) {
        if (freq[i] == 1) freq[i] = ++res;
        else if (freq[i] == -1) freq[i] = --res;
        else freq[i] = res;

        if (i != 0 && freq[i] > freq[i - 1]) resIndex = i;
    }

    return resIndex;
}

int main()
{
    // int left[] = { 2,3,1 }; // 3 (3 and 4 both come 3 time but we return first occurance)
    // int right[] = { 5,4,6 };
    // // int left[] = { 1,2,0 }; // 2 (2 and 3 both come 3 time but we return first occurance)
    // // int right[] = { 4,3,5 };
    // // int left[] = { 1,2,4 };
    // // int right[] = { 4,5,7 };

    // cout << "Maximum apparing elemnt in the given range array is: " << MaxAppEl(left, 3, right, 3);


    int left[] = { 10, 15, 30 };
    int right[] = { 15, 25, 35 };

    cout << MaxAppEl(left, 3, right, 3);

    return 0;
}