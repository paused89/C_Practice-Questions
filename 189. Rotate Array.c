/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/

void rotate(int* nums, int numsSize, int k) {

    int rot=0;

    printf("%d",numsSize);

    while(rot<k) {

        int temp = nums[numsSize-1];        //store the last element

        for (int i=numsSize-1; i>0; i--) {

            nums[i]= nums[i-1];         //shift each element to right from end of array
        }

        nums[0] = temp;         //assign first element as original last element
        rot++;
    }
    
}