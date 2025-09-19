#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;

    // Ask user for the maximum size of the string
    cout << "Enter maximum length of string: ";
    cin >> size;
    cin.ignore(); // clear input buffer

    // Dynamically allocate memory for the string
    char* str = new char[size + 1]; // +1 for null terminator

    // Take input from the user
    cout << "Enter a string: ";
    cin.getline(str, size + 1);

    // Reverse the string in place
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Display the reversed string
    cout << "Reversed string: " << str << endl;

    // Free dynamically allocated memory
    delete[] str;

    return 0;
}
