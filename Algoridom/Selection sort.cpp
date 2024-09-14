#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {5, 3, 456, 4, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min;

    for (int i = 0; i < size - 1; i++) {
        min = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min= j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
