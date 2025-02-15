#include <iostream>

using namespace std;

int* bubbleSort(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    return numbers;
}

int main() {
    int numbers[] = {2, 1, 10, 5, 3, 28, 4, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    bubbleSort(numbers, length);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
