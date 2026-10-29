#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
