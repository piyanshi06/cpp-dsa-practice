#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 25, 7, 40, 18, 30};

    int target;
    bool found = false;

    cout << "Enter number = ";
    cin >> target;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            cout << "Element found at index = " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}