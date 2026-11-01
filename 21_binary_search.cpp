#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int low = 0, high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        cout << "Element found at index: " << found;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
