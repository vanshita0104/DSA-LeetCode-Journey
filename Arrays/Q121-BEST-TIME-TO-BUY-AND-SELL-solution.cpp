```cpp
/*
====================================================
LeetCode 121 - Best Time to Buy and Sell Stock
====================================================

Problem Description:
You are given an array prices where prices[i] represents
the price of a stock on the ith day.

Choose one day to buy the stock and a different day in
the future to sell it. Return the maximum profit you can
achieve.

If no profit can be made, return 0.

Input:
An integer array prices representing the stock price
on each day.

Example:
prices = [7, 1, 5, 3, 6, 4]

Output:
5

Explanation:
Buy at price 1 and sell at price 6.
Maximum Profit = 6 - 1 = 5.

Approach:
Traverse the array once while keeping track of the
minimum price seen so far using 'mini'.

For each price, calculate the profit by subtracting
the minimum buying price from the current selling price.

Update the maximum profit found so far and then update
the minimum price if the current price is smaller.

Time Complexity:
O(n) - The array is traversed only once.

Space Complexity:
O(1) - Only a few variables are used.

LeetCode:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
====================================================
*/

class Solution { 
public: 
    int maxProfit(vector<int>& prices) { 
        int mini = prices[0]; 
        int profit = 0; 

        for(int i = 1; i < prices.size(); i++) { 
            int cost = prices[i] - mini; 
            profit = max(cost, profit); 
            mini = min(prices[i], mini); 
        } 

        return profit; 
    } 
};
```
