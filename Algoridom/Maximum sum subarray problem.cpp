/*
// Function to find maximum of two integers
function max(a, b)
    if a > b
        return a
    else
        return b

// Function to find maximum of three integers
function max(a, b, c)
    return max(max(a, b), c)

// Function to find the maximum possible sum in array such that array[mid] is part of it
function maxCrossingSum(array, left, mid, right)
    // Include elements on left of mid
    sum = 0
    left_sum = -infinity
    for i from mid downto left
        sum = sum + array[i]
        if sum > left_sum
            left_sum = sum

    // Include elements on right of mid
    sum = 0
    right_sum = -infinity
    for i from mid to right
        sum = sum + array[i]
        if sum > right_sum
            right_sum = sum

    // Return sum of elements on left and right of mid
    // returning only left_sum + right_sum will fail for [-2, 1]
    return max(left_sum + right_sum - array[mid], left_sum, right_sum)

// Function to return sum of maximum sum subarray in array[left..right]
function maxSubArraySum(array, left, right)
    // Invalid range: left is greater than right
    if left > right
        return -infinity

    // Base case: only one element
    if left == right
        return array[left]

    // Find middle point
    mid = (left + right) / 2

    // Return maximum of following three possible cases:
    // a) Maximum subarray sum in left half
    // b) Maximum subarray sum in right half
    // c) Maximum subarray sum such that the subarray crosses the midpoint
    return max(maxSubArraySum(array, left, mid - 1),
               maxSubArraySum(array, mid + 1, right),
               maxCrossingSum(array, left, mid, right))

// Main function
function main()
    array = [-1, 6, 11, -8, 20]
    n = length of array
    max_sum = maxSubArraySum(array, 0, n - 1)
    print "Maximum contiguous sum is " + max_sum

main()

*/












#include <bits/stdc++.h>

using namespace std;



// A utility function to find maximum of two integers

int max(int a, int b) {

    return (a > b) ? a : b;

}



// A utility function to find maximum of three integers

int max(int a, int b, int c) {

    return max(max(a, b), c);

}



// Find the maximum possible sum in arr[] such that arr[m]

// is part of it

int maxCrossingSum(int arr[], int l, int m, int h) {

    // Include elements on left of mid.

    int sum = 0;

    int left_sum = INT_MIN;

    for (int i = m; i >= l; i--) {

        sum = sum + arr[i];

        if (sum > left_sum)

            left_sum = sum;

    }



    // Include elements on right of mid

    sum = 0;

    int right_sum = INT_MIN;

    for (int i = m; i <= h; i++) {

        sum = sum + arr[i];

        if (sum > right_sum)

            right_sum = sum;

    }



    // Return sum of elements on left and right of mid

    // returning only left_sum + right_sum will fail for

    // [-2, 1]

    return max(left_sum + right_sum - arr[m], left_sum, right_sum);

}



// Returns sum of maximum sum subarray in aa[l..h]

int maxSubArraySum(int arr[], int l, int h) {

    // Invalid Range: low is greater than high

    if (l > h)

        return INT_MIN;

    // Base Case: Only one element

    if (l == h)

        return arr[l];



    // Find middle point

    int m = (l + h) / 2;



    /* Return maximum of following three possible cases

            a) Maximum subarray sum in left half

            b) Maximum subarray sum in right half

            c) Maximum subarray sum such that the subarray

       crosses the midpoint */

    return max(maxSubArraySum(arr, l, m - 1),

               maxSubArraySum(arr, m + 1, h),

               maxCrossingSum(arr, l, m, h));

}





int main() {

    int arr[] = { -1,6,11,-8,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, 0, n - 1);

    cout << "Maximum contiguous sum is " << max_sum;

    return 0;

}
