
//Given N distinct integers, how many triples sum to exactly zero?
//Ex: 30 -40 -20 -10 40 0 10 5
/*
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
int n,combination=0;
int arr[1000];
cout<<"How many numbers?: ";
cin>>n;
for(int p=0; p<n; p++) {
cin>>arr[p];
}
for(int i=0; i<n-2; i++) {
for(int j=i+1; j<n-1; j++) {
for(int k=j+1; k<n; k++) {
if(arr[i]+arr[j]+arr[k]==0) {
combination++;
}
}
}
}
cout<<"Number of triples that sum to zero: ";
cout<<combination;
return 0;
}


*/




        // Brute Force Approach



#include <bits/stdc++.h>
using namespace std;


int countTriplets(int arr[], int n) {
    int count = 0;
    sort(arr, arr + n);  // Step 1: Sort the array

    // Step 2: Iterate through the array
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                count++;
                left++;
                right--;
            } else if (sum < 0) {
                left++;  // Increase the sum by moving the left pointer
            } else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {30, -40, -20, -10, 40, 0, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    int result = countTriplets(arr, n);
    cout << "Number of triples that sum to zero: " << result << endl;

    return 0;
}


