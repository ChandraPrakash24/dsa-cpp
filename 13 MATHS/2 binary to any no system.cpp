#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
    int choice;
    cout << "Enter your choice:\n";
    cout << "1. Binary\n";
    cout << "2. Hexadecimal\n";
    cout << "3. Octal\n";
    cin >> choice;

    if (choice == 1) {
        string binaryString;
        cout << "Enter the binary string: ";
        cin >> binaryString;

        // Convert binary string to decimal using std::bitset
        bitset<32> binary(binaryString);
        int decimalValue = binary.to_ulong();

        cout << "Binary to Decimal: " << decimalValue << endl;
    } else if (choice == 2) {
        string hexString;
        cout << "Enter the hexadecimal string: ";
        cin >> hexString;

        // Convert hexadecimal string to decimal using std::stoi with base 16
        int decimalValue = stoi(hexString, nullptr, 16);

        cout << "Hexadecimal to Decimal: " << decimalValue << endl;
    } else if (choice == 3) {
        string octalString;
        cout << "Enter the octal string: ";
        cin >> octalString;

        // Convert octal string to decimal using std::stoi with base 8
        int decimalValue = stoi(octalString, nullptr, 8);

        cout << "Octal to Decimal: " << decimalValue << endl;
    } else {
        cout << "Invalid choice. Please select 1, 2, or 3." << endl;
    }

    return 0;
}
