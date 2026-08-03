/*
   Pattern 4: Right-Angled Number Pyramid - II
   Design:
   1 
   2 2 
   3 3 3 
   4 4 4 4 
   5 5 5 5 5
*/
#include <iostream>
using namespace std;

void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern4(n);
    return 0;
}