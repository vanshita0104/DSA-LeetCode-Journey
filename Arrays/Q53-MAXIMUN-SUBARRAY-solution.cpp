```cpp
/*
====================================================
LeetCode 53 - Maximum Subarray
====================================================

Problem Description:
Given an integer array nums, find the subarray with the
largest sum and return its sum.

A subarray is a contiguous part of the array containing
at least one element.

Input:
An integer array nums.

Example:
nums = [-2,1,-3,4,-1,2,1,-5,4]

Output:
6

Explanation:
The subarray [4,-1,2,1] has the maximum sum.
Maximum Sum = 6.

Approach:
Use Kadane's Algorithm.

Maintain a variable 'currsum' to store the sum of the
current subarray and 'maxi' to store the maximum sum
found so far.

For each element, add it to 'currsum' and update 'maxi'.
If 'currsum' becomes negative, reset it to 0 because a
negative sum would reduce the sum of any future subarray.

Time Complexity:
O(n) - The array is traversed only once.

Space Complexity:
O(1) - Only a few variables are used.

LeetCode:
https://leetcode.com/problems/maximum-subarray/
====================================================
*/

class Solution { 
public: 
    int maxSubArray(vector<int>& nums) { 
        int currsum = 0; 
        int maxi = nums[0]; 

        for(int i = 0; i < nums.size(); i++) { 
            currsum = currsum + nums[i]; 
            maxi = max(maxi, currsum); 

            if(currsum < 0) { 
                currsum = 0; 
            } 
        } 

        return maxi; 
    } 
};
```
