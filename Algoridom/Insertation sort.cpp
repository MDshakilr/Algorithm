/*Insertion-Sort(A)
for i = 1 to A.length
   key = A[i]
   j = i– 1
   while j >= 0 and A[j] > key
      A[j + 1] = A[j]
      j= j -1
   A[j+ 1] = key

    */




#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 3, 456, 4, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

