#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin.ignore(); // Consume the newline character after reading n
    getline(cin, s);

    vector<bool> alphabet(26, false); // Initialize a vector to track the presence of each letter

    for (char c : s) {
        if (isalpha(c)) { // Check if the character is an alphabet letter
            int index = tolower(c) - 'a'; // Map the character to an index in the alphabet vector
            alphabet[index] = true;
        }
    }

    // Check if all letters in the alphabet vector are true
    bool isPangram = true;
    for (bool present : alphabet) {
        if (!present) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
