#include <iostream>

using namespace std;

void merge(int leftArray[], int rightArray[], int numbers[], int length) {
    int leftSize = length / 2;
    int rightSize = length - leftSize;
    int i = 0, left = 0, right = 0;

    while (left < leftSize && right < rightSize) {
        if (leftArray[left] < rightArray[right]) {
            numbers[i] = leftArray[left];
            i++;
            left++;
        } else {
            numbers[i] = rightArray[right];
            i++;
            right++;
        }
    }
    
    while (left < leftSize) {
        numbers[i] = leftArray[left];
        i++;
        left++;
    }

    while (right < rightSize) {
        numbers[i] = rightArray[right];
        i++;
        right++;
    }
}

void mergeSort(int numbers[], int length) {
    if (length <= 1) return;

    int middle = length / 2;
    int leftArray[middle];
    int rightArray[length - middle];

    int i = 0;
    int j = 0;

    for (; i < length; i++) {
        if (i < middle) {
            leftArray[i] = numbers[i];
        } else {
            rightArray[j] = numbers[i];
            j++;
        }
    }

    mergeSort(leftArray, middle);
    mergeSort(rightArray, length - middle);
    merge(leftArray, rightArray, numbers, length);
}

int main() {
    int numbers[] = {2, 1, 10, 5, 3, 28, 4, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    mergeSort(numbers, length);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
