#include <iostream>

using namespace std;

int partition(int numbers[], int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] < pivot) {
            i++;
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }
    int temp = numbers[i + 1];
    numbers[i + 1] = numbers[high];
    numbers[high] = temp;
    return i + 1;
}

void quicksort(int numbers[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(numbers, low, high);
        quicksort(numbers, low, pivotIndex - 1);
        quicksort(numbers, pivotIndex + 1, high);
    }
}

int main() {
    int numbers[] = {2, 1, 10, 5, 3, 28, 4, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    quicksort(numbers, 0, length - 1);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
