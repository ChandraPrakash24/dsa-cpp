// #include <iostream>
// #include <string>
// using namespace std;

// string encrypt(string password, int key) {
//     string result = "";
//     for (int i = 0; i < password.length(); i++) {
//         result += char(int(password[i] + key) % 127);
//     }
//     return result;
// }

// int main() {
//     string password;
//     int key;

//     cout << "Enter password to encrypt: ";
//     getline(cin, password);

//     while (password.empty()) {
//         cout << "Please enter a valid password: ";
//         getline(cin, password);
//     }

//     cout << "Enter key: ";
//     cin >> key;

//     while (key < 1) {
//         cout << "Please enter a positive key: ";
//         cin >> key;
//     }

//     string encryptedPassword = encrypt(password, key);
//     cout << "Encrypted password: " << encryptedPassword << endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

string encrypt(string password, string key) {
    string encrypted_password = "";
    for (int i = 0; i < password.length(); i++) {
        int shift = int(key[i % key.length()]);
        char encrypted_char = char((int(password[i]) + shift) % 128);
        encrypted_password += encrypted_char;
    }
    return encrypted_password;
}

int main() {
    string password, key;
    cout << "Enter password to encrypt: ";
    getline(cin, password);
    cout << "Enter key: ";
    getline(cin, key);
    string encrypted_password = encrypt(password, key);
    cout << "Encrypted password: " << encrypted_password << endl;
    return 0;
}

// Enter password to encrypt: abcd1234#_abcd1234
// Enter key: 24126397898992791
// Encrypted password: ┘┌█▄⌐¬½¼¢╫┘┌█▄⌐¬½¼