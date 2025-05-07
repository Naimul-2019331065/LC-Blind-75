# 01. Two Sum

**Link:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/)

## 📝 Problem

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example

Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

---

## ✅ My Approach

1. Use a hash map (unordered) to store the value-to-index mapping.
2. For each element, check if `(target - current number)` exists in the map.
3. If it exists and is not the same index, return both indices.

## ⏱️ Complexity

- **Time:** O(n) – one pass through the list
- **Space:** O(n) – for the hash map
