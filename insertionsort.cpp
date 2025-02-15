#include <iostream>

using namespace std;

void insertionSort(int numbers[], int length) {
    for (int i = 1; i < length; i++) {
        int temp = numbers[i];
        int j = i-1;
        for (; j >= 0 && numbers[j] > temp; j--) {
            numbers[j+1] = numbers[j];
        }
        numbers[j+1] = temp;
    }
}

int main() {
    int numbers[] = {2, 1, 10, 5, 3, 28, 4, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    insertionSort(numbers, length);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
