Given an integer array `nums`, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.

[Question Link](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/)


Example 1:
```
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
```


Example 2:
```
Input: nums = [1,2,3,4]
Output: 0
```

Solution:

`[10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60]`

```

1. Find the candidate unsorted subarray

    1. Scan from left to right and find the first element which is greater than the next element. Let `s` be the index of such an element. In the above example 1, `s` is 3 (index of 30).

    2. Scan from right to left and find the first element (first in right to left order) which is smaller than the next element (next in right to left order). Let `e` be the index of such an element. In the above example 1, e is 7 (index of 31).

2. Check whether sorting the candidate unsorted subarray makes the complete array sorted or not. If not, then include more elements in the subarray.

    1. Find the minimum and maximum values in `arr[s..e]`. Let minimum and maximum values be `min` and `max`. `min` and `max` for `[30, 25, 40, 32, 31]` are `25` and `40` respectively.

    2. Find the first element (if there is any) in `arr[0..s-1]` which is greater than `min`, change `s` to `index` of this element. There is no such element in above example 1.

    3. Find the last element (if there is any) in `arr[e+1..n-1]` which is smaller than `max`, change `e` to `index` of this element. In the above example 1, `e` is changed to `8` (index of 35)

Return `(end - st +1)`

```