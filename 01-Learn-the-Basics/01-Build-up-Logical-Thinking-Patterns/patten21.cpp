/*
   Pattern 21: Hollow Rectangle Pattern
   Design:
   ****
   * *
   * *
   ****
*/
#include <iostream>
using namespace std;

void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    pattern21(n);
    return 0;
}