#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, i;

    cout << "Enter number to search: ";
    cin >> key;

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Found at position " << i;
            return 0;
        }
    }

    cout << "Not found";
    return 0;
}
