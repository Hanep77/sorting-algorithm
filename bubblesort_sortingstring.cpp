#include <iostream>

using namespace std;

void bubbleSort(char characters[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (characters[j] > characters[j+1]) {
                int temp = characters[j];
                characters[j] = characters[j+1];
                characters[j+1] = temp;
            }
        }
    }
}

int main() {
    char characters[] = {'a', 'u', 'y', 'b', 'f', 'd', 'c', 'l'};
    int length = sizeof(characters) / sizeof(characters[0]);

    cout << "unsorted array : ";
    for (int i = 0; i < length; i++) {
        cout << characters[i] << " ";
    }

    bubbleSort(characters, length);

    cout << endl <<  "sorted array   : ";
    for (int i = 0; i < length; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    return 0;
}
