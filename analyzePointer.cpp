#include <iostream>
using namespace std;

//Function to analyze pointer
void analyze_pointer(int* ptr) {
    // Print the memory address
    cout << "Memory location: " << ptr << endl;

    // Print the value stored at that memory address
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Stack allocation
    int iValue = 42; // allocated on stack
    cout << "Analyzing stack variable:" << endl;
    analyze_pointer(&iValue); // pass address

    cout << endl;

    // Heap allocation
    int* pHeap = new int;  // allocated on heap
    *pHeap = 99;           // assign value
    cout << "Analyzing heap variable:" << endl;
    analyze_pointer(pHeap); // pass pointer

    // Clean up heap memory
    delete pHeap;

    return 0;
}
