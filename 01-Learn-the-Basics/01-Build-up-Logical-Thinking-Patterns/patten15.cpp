/*
   Pattern 15: Reverse Letter Triangle
   Design:
   A B C D E
   A B C D
   A B C
   A B
   A
*/
#include <iostream>
using namespace std;

void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern15(n);
    return 0;
}