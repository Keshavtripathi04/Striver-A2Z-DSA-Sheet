/*
   Pattern 5: Inverted Right Pyramid
   Design:
   * * * * *
   * * * * * * * * * *
*/
#include <iostream>
using namespace std;

void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern5(n);
    return 0;
}