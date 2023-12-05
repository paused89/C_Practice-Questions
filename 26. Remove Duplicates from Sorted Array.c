/*26. Remove Duplicates from Sorted Array
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
    Return k.
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores)

*/

int removeDuplicates(int* nums, int numsSize) {

    int j=0;  //no of unique elements
//Compare adajacent ele: if not equal then add it to the array at the beginning
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[j]=nums[i];
            j++;
        }
    }
//Add last element to output(since it will be skipped in for loop)
    nums[j]=nums[numsSize-1];

//increment j
    return j+1;
    
}