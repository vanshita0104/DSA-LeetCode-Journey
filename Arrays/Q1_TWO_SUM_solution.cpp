```cpp
/*
====================================================
LeetCode 1 - Two Sum
====================================================

Problem Description:
Given an array of integers nums and an integer target,
return the indices of the two numbers such that they
add up to the target.

You may assume that each input has exactly one solution,
and you cannot use the same element twice.

Input:
An integer array nums and an integer target.

Example:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Approach:
Use two nested loops to check every possible pair of
elements in the array.

For each pair, check if nums[i] + nums[j] is equal to
the target. If the sum matches the target, return the
indices {i, j}.

If no pair is found, return an empty vector.

Time Complexity:
O(n²) - Two nested loops check all possible pairs.

Space Complexity:
O(1) - No extra data structure is used.

LeetCode:
https://leetcode.com/problems/two-sum/
====================================================
*/

class Solution { 
public: 
    vector<int> twoSum(vector<int>& nums, int target) { 
        for(int i = 0; i < nums.size(); i++) { 
            for(int j = i + 1; j < nums.size(); j++) { 
                if(nums[i] + nums[j] == target) { 
                    return {i,j}; 
                } 
            } 
        } 
        return {}; 
    } 
};
```
