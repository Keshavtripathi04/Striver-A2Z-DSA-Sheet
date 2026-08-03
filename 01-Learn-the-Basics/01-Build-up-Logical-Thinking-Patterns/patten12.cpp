/*
   Pattern 12: Number Crown Pattern
   Design:
   1        1
   12      21
   123    321
   1234  4321
   1234554321
*/
#include <iostream>
using namespace std;

void pattern12(int n) {
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = 1; j <= spaces; j++) cout << " ";
        for (int j = i; j >= 1; j--) cout << j;
        cout << endl;
        spaces -= 2;
    }
}

int main() {
    int n = 5;
    pattern12(n);
    return 0;
}