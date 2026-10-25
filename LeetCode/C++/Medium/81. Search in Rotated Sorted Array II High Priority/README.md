# 📝 81. Search in Rotated Sorted Array II🔥 High Priority (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/search-in-rotated-sorted-array-ii)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Binary Search

### 🚀 Performance
- **Runtime:** N/A
- **Memory:** N/A

---

### 📜 Problem Description

![image](https://www.google.com/s2/favicons?domain=bloomberg.com&sz=32) Bloomberg ![image](https://www.google.com/s2/favicons?domain=walmartlabs.com&sz=32) Walmart Labs ![image](https://www.google.com/s2/favicons?domain=amazon.com&sz=32) Amazon ![image](https://www.google.com/s2/favicons?domain=accenture.com&sz=32) Accenture ![image](https://www.google.com/s2/favicons?domain=meta.com&sz=32) Meta

There is an integer array  `nums`  sorted in non-decreasing order (not necessarily with  **distinct**  values).

Before being passed to your function,  `nums`  is  **rotated**  at an unknown pivot index  `k`  ( `0 <= k < nums.length` ) such that the resulting array is  `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]`  ( **0-indexed** ). For example,  `[0,1,2,4,4,4,5,6,6,7]`  might be rotated at pivot index  `5`  and become  `[4,5,6,6,7,0,1,2,4,4]` .

Given the array  `nums`   **after**  the rotation and an integer  `target` , return  `true`  *if*  `target`  *is in*  `nums`  *, or*  `false`  *if it is not in*  `nums`  *.*

You must decrease the overall operation steps as much as possible.

**Example 1:**

```
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

```

**Example 2:**

```
Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

```

**Constraints:**

	
- `1 <= nums.length <= 5000`
	
- `-104 <= nums[i] <= 104`
	
- `nums`  is guaranteed to be rotated at some pivot.
	
- `-104 <= target <= 104`

**Follow up:**  This problem is similar to  [Search in Rotated Sorted Array](/problems/search-in-rotated-sorted-array/description/) , but  `nums`  may contain  **duplicates** . Would this affect the runtime complexity? How and why?