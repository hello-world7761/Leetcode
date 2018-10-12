//
//  main.c
//  two sums
//
//  Created by 姜庆彩 on 2018/1/30.
//  Copyright © 2018年 姜庆彩. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target)
{
    int *result = (int *)malloc(sizeof(int) * 2);
    for(int left = 0; left < numsSize; left++)
    {
        for(int right = left + 1; right < numsSize; right++)
        {
            if(nums[left] + nums[right] == target)
            {
                result[0] = left;
                result[1] = right;
                break;
             }
        }
    }
    return result;
}
int main()
{
    int sum[9] = {1,2,3,4,5,6,7,8,9};
    int Target = 16;
    int numSize = 9;
    int* answer = (int *)malloc(sizeof(int*)*2);
    answer = twoSum(sum, numSize, Target);
    printf("%d",*answer);
}
