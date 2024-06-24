#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    // Loop to take input three times
    for (int i = 0; i < 3; ++i) {
        cout << "Enter the first string: ";
        getline(cin, str1); // Read entire line including spaces
        
        cout << "Enter the second string: ";
        getline(cin, str2); // Read entire line including spaces
        
        // Concatenate the strings
        string result = str1 + str2;

        // Output the concatenated string
        cout << "Concatenated string: " << result << endl;
    }

    return 0;
}
