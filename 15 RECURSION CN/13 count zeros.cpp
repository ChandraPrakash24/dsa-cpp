#include <iostream>
using namespace std;

int countZerosRec(int input) {
    if (input == 0) {
        return 1; // Handling the case when input is 0
    }
    if (input < 10) {
        return 0; // Base case
    }
    else if (input % 10 == 0) {
        return 1 + countZerosRec(input / 10);
    }
    return countZerosRec(input / 10);
}

int main() {
    int input;
    cin >> input;

    int result = countZerosRec(input);
    cout << result << endl;



    return 0;
}


