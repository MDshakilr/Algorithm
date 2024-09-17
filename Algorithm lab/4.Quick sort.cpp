#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= h)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p1 = partition(arr, l, h);
        quicksort(arr, l, p1 - 1);
        quicksort(arr, p1 + 1, h);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Added space between elements
    }
    return 0;
}
