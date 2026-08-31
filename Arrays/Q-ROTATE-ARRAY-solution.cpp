```cpp
/*
====================================================
LeetCode 189 - Rotate Array
====================================================

Problem Description:
Given an integer array nums, rotate the array to the
right by k steps, where k is a non-negative integer.

Input:
An integer array nums and an integer k.

Example:
nums = [1,2,3,4,5,6,7]
k = 3

Output:
[5,6,7,1,2,3,4]

Approach:
Use the three-reverse technique.

1. First, calculate k % n to handle cases where k is
   greater than the size of the array.

2. Reverse the entire array.

3. Reverse the first k elements.

4. Reverse the remaining n-k elements.

This rotates the array to the right by k positions
without using an extra array.

Time Complexity:
O(n) - The array is reversed three times.

Space Complexity:
O(1) - The rotation is performed in-place.

LeetCode:
https://leetcode.com/problems/rotate-array/
====================================================
*/

class Solution { 
public: 
    void rotate(vector<int>& nums, int k) { 
        int n = nums.size(); 
        k = k % n; 

        reverse(nums.begin(), nums.end()); 
        reverse(nums.begin(), nums.begin() + k); 
        reverse(nums.begin() + k, nums.end()); 
    } 
};
```
