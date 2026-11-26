
#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < numsSize) {
        nums[j] = 0;
        j++;
    }
}

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    int nums2[] = {0, 0, 1};

    moveZeroes(nums1, 5);
    moveZeroes(nums2, 3);

    printf("Test 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums1[i]);
    }

    printf("\nTest 2: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", nums2[i]);
    }

    return 0;
}
