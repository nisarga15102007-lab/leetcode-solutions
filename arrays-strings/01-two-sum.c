
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int size1;
    int* result1 = twoSum(nums1, 4, 9, &size1);

    printf("Test 1: [%d, %d]\n", result1[0], result1[1]);
    free(result1);

    int nums2[] = {3, 3};
    int size2;
    int* result2 = twoSum(nums2, 2, 6, &size2);

    printf("Test 2: [%d, %d]\n", result2[0], result2[1]);
    free(result2);

    return 0;
}
