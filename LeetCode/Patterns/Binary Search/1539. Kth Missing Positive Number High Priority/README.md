# 📝 1539. Kth Missing Positive Number🔥 High Priority (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/kth-missing-positive-number/)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Binary Search

### 🚀 Performance
- **Runtime:** N/A
- **Memory:** N/A

---

### 📜 Problem Description

![image](https://www.google.com/s2/favicons?domain=meta.com&sz=32) Meta ![image](https://www.google.com/s2/favicons?domain=morganstanley.com&sz=32) Morgan Stanley ![image](https://www.google.com/s2/favicons?domain=tiktok.com&sz=32) TikTok ![image](https://www.google.com/s2/favicons?domain=bloomberg.com&sz=32) Bloomberg ![image](https://www.google.com/s2/favicons?domain=amazon.com&sz=32) Amazon

Given an array  `arr`  of positive integers sorted in a  **strictly increasing order** , and an integer  `k` .

Return  *the*   `kth`   ***positive**  integer that is  **missing**  from this array.*

**Example 1:**

```
Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

```

**Example 2:**

```
Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.

```

**Constraints:**

	
- `1 <= arr.length <= 1000`
	
- `1 <= arr[i] <= 1000`
	
- `1 <= k <= 1000`
	
- `arr[i] < arr[j]`  for  `1 <= i < j <= arr.length`

**Follow up:**

Could you solve this problem in less than O(n) complexity?