/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.


*/
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int *arr;
    int ind1=0,ind2=0,temp=0,flag=0;
    
    //concat 2 arrays
    for(ind1=m;ind1<nums1Size,ind2<n;ind1++,ind2++)
    {
        nums1[ind1]=nums2[ind2];
    }

    //bubblesort

    for(int it=0;it<nums1Size-1;it++)   //iterate n-1 times
    {
        for(int i=0;i<nums1Size-1;i++)  //traverse the array
        {
            if(nums1[i]>nums1[i+1]) //check adjacent items if 10>5 then swap
            {
                temp=nums1[i];
                nums1[i]=nums1[i+1];
                nums1[i+1]=temp;

                flag=1;
            }
        }

        if(flag==0){    //if all elements are already sorted then return to main
            return;
        }
    }
}