
#include<bits/stdc++.h>
using namespace std;

// Merge function to merge two halves
void merge(int arr[], int l, int mid, int h) {
    int i = l;        // Starting index of the left subarray
    int j = mid + 1;  // Starting index of the right subarray
    int k = l;        // Starting index to be merged in temp array

    // Temporary array to store the merged elements
    int temp[h + 1];

    // Merge the two halves into temp[]
    while (i <= mid && j <= h) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right subarray, if any
    while (j <= h) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy the merged elements back into the original array
    for (int m = l; m <= h; m++) {
        arr[m] = temp[m];
    }
}

// Merge sort function
void mergeSort(int arr[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;

        // Sort first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);

        // Merge the sorted halves
        merge(arr, l, mid, h);
    }
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
