#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, low = 0, high = 4, mid;

    cout << "Enter number to search: ";
    cin >> key;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at position " << mid;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not found";
    return 0;
}
