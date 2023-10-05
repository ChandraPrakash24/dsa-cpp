//   ALL BELOW PROGRAMS ARE WORKING

// #include <iostream>
// #include <bitset>
// #include <string>
// using namespace std;

// int main() {
//     int choice;
//     cout << "Enter your choice:\n";
//     cout << "1. Binary to Decimal\n";
//     cout << "2. Decimal to Binary\n";
//     cout << "3. Hexadecimal to Decimal\n";
//     cout << "4. Decimal to Hexadecimal\n";
//     cout << "5. Octal to Decimal\n";
//     cout << "6. Decimal to Octal\n";
//     cout << "7. Hexadecimal to Octal\n";
//     cout << "8. Octal to Hexadecimal\n";
//     cout << "9. Hexadecimal to Binary\n";
//     cout << "10. Binary to Hexadecimal\n";
//     cout << "11. Binary to Octal\n";
//     cout << "12. Octal to Binary\n";
//     cin >> choice;

//     if (choice == 1) {
//         // Binary to Decimal
//         // ... (same as before)
//     } else if (choice == 2) {
//         // Decimal to Binary
//         // ... (same as before)
//     } else if (choice == 3) {
//         // Hexadecimal to Decimal
//         // ... (same as before)
//     } else if (choice == 4) {
//         // Decimal to Hexadecimal
//         // ... (same as before)
//     } else if (choice == 5) {
//         // Octal to Decimal
//         // ... (same as before)
//     } else if (choice == 6) {
//         // Decimal to Octal
//         // ... (same as before)
//     } else if (choice == 7) {
//         // Hexadecimal to Octal
//         string hexString;
//         cout << "Enter the hexadecimal string: ";
//         cin >> hexString;

//         int decimalValue = stoi(hexString, nullptr, 16);
//         cout << "Hexadecimal to Octal: " << oct << decimalValue << endl;
//     } else if (choice == 8) {
//         // Octal to Hexadecimal
//         string octalString;
//         cout << "Enter the octal string: ";
//         cin >> octalString;

//         int decimalValue = stoi(octalString, nullptr, 8);
//         cout << "Octal to Hexadecimal: " << hex << decimalValue << endl;
//     } else if (choice == 9) {
//         // Hexadecimal to Binary
//         string hexString;
//         cout << "Enter the hexadecimal string: ";
//         cin >> hexString;

//         int decimalValue = stoi(hexString, nullptr, 16);
//         cout << "Hexadecimal to Binary: " << bitset<32>(decimalValue) << endl;
//     } else if (choice == 10) {
//         // Binary to Hexadecimal
//         string binaryString;
//         cout << "Enter the binary string: ";
//         cin >> binaryString;

//         bitset<32> binary(binaryString);
//         int decimalValue = binary.to_ulong();
//         cout << "Binary to Hexadecimal: " << hex << decimalValue << endl;
//     } else if (choice == 11) {
//         // Binary to Octal
//         string binaryString;
//         cout << "Enter the binary string: ";
//         cin >> binaryString;

//         bitset<32> binary(binaryString);
//         int decimalValue = binary.to_ulong();
//         cout << "Binary to Octal: " << oct << decimalValue << endl;
//     } else if (choice == 12) {
//         // Octal to Binary
//         string octalString;
//         cout << "Enter the octal string: ";
//         cin >> octalString;

//         int decimalValue = stoi(octalString, nullptr, 8);
//         cout << "Octal to Binary: " << bitset<32>(decimalValue) << endl;
//     } else {
//         cout << "Invalid choice. Please select a valid option." << endl;
//     }

//     return 0;
// }













///////////////////////////////////////////////////////////////////////
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int choice;
//     cout << "Enter your choice:\n";
//     cout << "1. Binary to Decimal\n";
//     cout << "2. Decimal to Binary\n";
//     cout << "3. Hexadecimal to Decimal\n";
//     cout << "4. Decimal to Hexadecimal\n";
//     cout << "5. Octal to Decimal\n";
//     cout << "6. Decimal to Octal\n";
//     cout << "7. Hexadecimal to Octal\n";
//     cout << "8. Octal to Hexadecimal\n";
//     cin >> choice;

//     if (choice == 1) {
//         string binaryString;
//         cout << "Enter the binary string: ";
//         cin >> binaryString;

//         // Convert binary string to decimal using std::bitset
//         bitset<32> binary(binaryString);
//         int decimalValue = binary.to_ulong();

//         cout << "Binary to Decimal: " << decimalValue << endl;
//     } else if (choice == 2) {
//         int decimalValue;
//         cout << "Enter the decimal number: ";
//         cin >> decimalValue;

//         // Convert decimal to binary using std::bitset
//         cout << "Decimal to Binary: " << bitset<32>(decimalValue) << endl;
//     } else if (choice == 3) {
//         string hexString;
//         cout << "Enter the hexadecimal string: ";
//         cin >> hexString;

//         // Convert hexadecimal string to decimal using std::stoi with base 16
//         int decimalValue = stoi(hexString, nullptr, 16);

//         cout << "Hexadecimal to Decimal: " << decimalValue << endl;
//     } else if (choice == 4) {
//         int decimalValue;
//         cout << "Enter the decimal number: ";
//         cin >> decimalValue;

//         // Convert decimal to hexadecimal using std::hex
//         cout << "Decimal to Hexadecimal: " << hex << decimalValue << endl;
//     } else if (choice == 5) {
//         string octalString;
//         cout << "Enter the octal string: ";
//         cin >> octalString;

//         // Convert octal string to decimal using std::stoi with base 8
//         int decimalValue = stoi(octalString, nullptr, 8);

//         cout << "Octal to Decimal: " << decimalValue << endl;
//     } else if (choice == 6) {
//         int decimalValue;
//         cout << "Enter the decimal number: ";
//         cin >> decimalValue;

//         // Convert decimal to octal using std::oct
//         cout << "Decimal to Octal: " << oct << decimalValue << endl;
//     } else if (choice == 7) {
//         string hexString;
//         cout << "Enter the hexadecimal string: ";
//         cin >> hexString;

//         // Convert hexadecimal string to decimal using std::stoi with base 16
//         int decimalValue = stoi(hexString, nullptr, 16);

//         // Convert decimal to octal using std::oct
//         cout << "Hexadecimal to Octal: " << oct << decimalValue << endl;
//     } else if (choice == 8) {
//         string octalString;
//         cout << "Enter the octal string: ";
//         cin >> octalString;

//         // Convert octal string to decimal using std::stoi with base 8
//         int decimalValue = stoi(octalString, nullptr, 8);

//         // Convert decimal to hexadecimal using std::hex
//         cout << "Octal to Hexadecimal: " << hex << decimalValue << endl;
//     } else {
//         cout << "Invalid choice. Please select a valid option." << endl;
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////



