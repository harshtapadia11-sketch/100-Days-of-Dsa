// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1
#include <stdio.h>

// simple bubble sort
void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Step 1: sort
    sort(arr, n);

    // Step 2: count
    int count = 1;

    for(int i = 0; i < n; i++) {

        if(i < n-1 && arr[i] == arr[i+1]) {
            count++;
        }
        else {
            printf("%d:%d ", arr[i], count);
            count = 1;
        }
    }

    return 0;
}
