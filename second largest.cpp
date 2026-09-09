#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 8, 40, 15};

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < 5; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second largest = " << secondLargest << endl;

    return 0;
}