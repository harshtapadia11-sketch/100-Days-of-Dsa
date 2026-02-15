// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.

 #include <stdio.h>

int main() {
    int n1, n2;

    // Size input
    scanf("%d", &n1);
    int nums1[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n2);
    int nums2[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &nums2[i]);

    int used[n2];   // to mark already used elements
    for(int i = 0; i < n2; i++)
        used[i] = 0;

    // Intersection logic
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(nums1[i] == nums2[j] && used[j] == 0) {
                printf("%d ", nums1[i]);
                used[j] = 1;   // mark as used
                break;         // move to next element of nums1
            }
        }
    }

    return 0;
}
