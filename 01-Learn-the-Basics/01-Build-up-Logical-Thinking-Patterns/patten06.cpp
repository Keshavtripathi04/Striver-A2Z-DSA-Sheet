/*
   Pattern 6: Inverted Numbered Right Pyramid
   Design:
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
*/
#include <iostream>
using namespace std;

void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern6(n);
    return 0;
}