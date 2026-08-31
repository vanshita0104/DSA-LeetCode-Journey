```cpp
/*
====================================================
LeetCode 33 - Search in Rotated Sorted Array
====================================================

Problem Description:
Given an integer array nums that is sorted in ascending
order and rotated at an unknown position, search for a
given target value.

Return the index of target if it exists in the array.
Otherwise, return -1.

Input:
An integer array nums and an integer target.

Example:
nums = [4,5,6,7,0,1,2]
target = 0

Output:
4

Approach:
Use a linear search to traverse the array from the
beginning.

For each element, check whether it is equal to the
target. If the target is found, store its index and
return it immediately.

If the target is not found after traversing the entire
array, return -1.

Time Complexity:
O(n) - In the worst case, the entire array is traversed.

Space Complexity:
O(1) - Only a few variables are used.

LeetCode:
https://leetcode.com/problems/search-in-rotated-sorted-array/
====================================================
*/

class Solution { 
public: 
    int search(vector<int>& nums, int target) { 
        bool found = false; 
        int index = -1; 

        for(int i = 0; i < nums.size(); i++) { 
            if(nums[i] == target) { 
                found = true; 
                index = i; 
                break; 
            } 
        } 

        if(found == true) { 
            return index; 
        }
        else { 
            return -1; 
        } 
    } 
};
```
