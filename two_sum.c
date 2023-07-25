/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *p = malloc(2 * sizeof(int));
    *returnSize = 2;
    int i = 0;
    int j;

    while (i < numsSize-1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                p[0] = i;
                p[1] = j;
                return (p);
            }
            j++;
        }
        i++;
    }
    return (p);
}
