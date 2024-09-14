/*

Binary-Search(A, target)
1.  low = 0
2.  high = length(A) - 1
3.  while low <= high
4.      mid = floor((low + high) / 2)
5.      if A[mid] == target
6.          return mid
7.      else if A[mid] < target
8.          low = mid + 1
9.      else
10.         high = mid - 1
11. return -1


Pseudocode for Binary Search (Recursive)
Binary-Search(A, target, low, high)
1.  if low > high
2.      return -1
3.  mid = floor((low + high) / 2)
4.  if A[mid] == target
5.      return mid
6.  else if A[mid] < target
7.      return Binary-Search(A, target, mid + 1, high)
8.  else
9.      return Binary-Search(A, target, low, mid - 1)

*/
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
