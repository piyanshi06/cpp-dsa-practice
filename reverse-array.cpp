#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 25, 7, 40, 18, 30};

    int i = 0;
    int j = 5;

    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}