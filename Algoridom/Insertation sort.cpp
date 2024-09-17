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



#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int a[], int n)
{
    int i, j, key;
    for(j=1; j<n; j++)
    {
        key = a[j];
        i = j-1;
        while(i >= 0 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }
}
int main()
{
    int ara[50], n;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;
    for(int i=0; i<n; i++) cin >> ara[i];
    insertion_sort(ara, n);
    cout << "Sorted array:\n";
    for(int i=0; i<n; i++)
    {
        cout << ara[i] << " ";
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int size)
{
    int i, j, key;
    for(j=1; j<size; j++)
    {
        key = arr[j];
        i = j-1;
        while(i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
}
int main()
{
    int arr[]={4,6,3,2,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    //cout << "Enter value of n : ";
    //cin >> n;
    //cout << "Enter " << n << " numbers:" << endl;
    //for(int i=0; i<n; i++) cin >> ara[i];
    insertion_sort(arr,size);
    cout << "Sorted array:\n";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
