#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 25, 7, 40, 18, 30};

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < 6; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}