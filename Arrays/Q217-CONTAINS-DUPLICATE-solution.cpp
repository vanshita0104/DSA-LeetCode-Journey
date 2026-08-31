/*
====================================================
LeetCode 217 - Contains Duplicate
====================================================

Problem Description:
Given an integer array nums, return true if any value
appears at least twice in the array, and return false
if every element is distinct.

Input:
An integer array nums.

Example:
nums = [1, 2, 3, 1]

Output:
true

Approach:
First, sort the array. After sorting, duplicate elements
will be placed next to each other.

Then, traverse the array and compare each element with
the previous element. If both are equal, a duplicate
exists, so return true.

If no adjacent duplicate elements are found, return false.

Time Complexity:
O(n log n) - Due to sorting the array.

Space Complexity:
O(log n) - Sorting uses extra space depending on the
sorting implementation.

LeetCode:
https://leetcode.com/problems/contains-duplicate/
====================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                return true;
                break;
            }
        }

        return false;
    }
};

