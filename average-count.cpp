#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 25, 7, 40, 18, 30};

    int sum = 0;
    int average;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        sum = sum + arr[i];
    }

    average = sum / 6;

    for (int i = 0; i < 6; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    cout << "Average = " << average << endl;
    cout << "Count = " << count << endl;

    return 0;
}