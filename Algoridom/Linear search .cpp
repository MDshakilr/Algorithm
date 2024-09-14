#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int value=6;

    int arr[]= {5,2,10,6,7,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool found =false;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            cout<<"value found:"<<arr[i];
            found=true;
            break;
        }
        if (!found)
        {
            cout << "Value not found\n";
        }
    }
}
/*
    #include <iostream>
using namespace std;

// Recursive linear search function
int linearSearch(int arr[], int size, int value, int index) {
    // Base case: If index reaches beyond the array size, value not found
    if (index >= size) {
        return -1;
    }

    // If the current element matches the value, return its index
    if (arr[index] == value) {
        return index;
    }

    // Recursive call to search in the rest of the array
    return linearSearch(arr, size, value, index + 1);
}

int main() {
    int value = 13;
    int arr[] = {5, 2, 10, 6, 7, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive linear search function
    int index = linearSearch(arr, size, value, 0);

    // Check if the value is found
    if (index != -1) {
        cout << "Value found at index " << index << endl;
    } else {
        cout << "Value not found" << endl;
    }

    return 0;
}

*/
