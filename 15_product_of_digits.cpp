#include <iostream>
using namespace std;

int main() {
    int n, product = 1;

    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    cout << product;

    return 0;
}
