#include <iostream>

using namespace std;

void selectionsort(int numbers[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = numbers[i];
            numbers[i] = numbers[minIndex];
            numbers[minIndex] = temp;
        }
    }
}

int main() {
    int numbers[] = {2, 1, 10, 5, 3, 28, 4, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    selectionsort(numbers, length);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
