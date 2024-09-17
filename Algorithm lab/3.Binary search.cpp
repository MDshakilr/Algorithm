#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int l = 0;
    int r = size - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 7, 9, 12, 15, 20, 24, 27, 33, 40, 50, 65, 72};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    int index = binarySearch(arr, size, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}





/*#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int l, int r, int target)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            return binarySearchRecursive(arr, mid + 1, r, target);
        else
            return binarySearchRecursive(arr, l, mid - 1, target);
    }
    return -1;
}

int main()
{
    int arr[] = {5, 7, 9, 12, 15, 20, 24, 27, 33, 40, 50, 65, 72};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    int index = binarySearchRecursive(arr, 0, size - 1, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
*/
#include <iostream>
#include <algorithm> // For sort()

int main() {
    int n, key;

    // Input number of elements in the array
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int arr[n];

    // Input the elements of the array
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Input the key to search
    std::cout << "Enter the key to search: ";
    std::cin >> key;

    // Sort the array (binary search requires sorted array)
    std::sort(arr, arr + n);

    // Binary search algorithm
    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = low + (high - low) / 2; // Avoids potential overflow
        if (arr[mid] == key) {
            found = true;
            std::cout << "Element found at index: " << mid << std::endl;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
