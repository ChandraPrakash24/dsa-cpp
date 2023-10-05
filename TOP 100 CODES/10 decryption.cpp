#include <iostream>
#include <string>
using namespace std;

string encrypt(string password, string key) {
    string encrypted_password = "";
    for (int i = 0; i < password.length(); i++) {
        int shift = int(key[i % key.length()]);
        char encrypted_char = char((int(password[i]) + shift + 128) % 128);
        encrypted_password += encrypted_char;
    }
    return encrypted_password;
}

string decrypt(string encrypted_password, string key) {
    string password = "";
    for (int i = 0; i < encrypted_password.length(); i++) {
        int shift = int(key[i % key.length()]);
        char decrypted_char = char((int(encrypted_password[i]) - shift + 128) % 128);
        password += decrypted_char;
    }
    return password;
}

int main() {
    string password, key;
    cout << "Enter password: ";
    getline(cin, password);
    cout << "Enter key: ";
    getline(cin, key);
    string encrypted_password = encrypt(password, key);
    cout << "Encrypted password: " << encrypted_password << endl;
    string decrypted_password = decrypt(encrypted_password, key);
    cout << "Decrypted password: " << decrypted_password << endl;
    return 0;
}