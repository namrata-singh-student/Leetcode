/*
Q2. Number of Perfect Pairs
Attempted
Medium
4 pt.
You are given an integer array nums.

A pair of indices (i, j) is called perfect if the following conditions are satisfied:

i < j
Let a = nums[i], b = nums[j]. Then:
min(|a - b|, |a + b|) <= min(|a|, |b|)
max(|a - b|, |a + b|) >= max(|a|, |b|)
Return the number of distinct perfect pairs.

Note: The absolute value |x| refers to the non-negative value of x.

 

Example 1:

Input: nums = [0,1,2,3]

Output: 2

Explanation:

There are 2 perfect pairs:

(i, j)	(a, b)	min(|a − b|, |a + b|)	min(|a|, |b|)	max(|a − b|, |a + b|)	max(|a|, |b|)
(1, 2)	(1, 2)	min(|1 − 2|, |1 + 2|) = 1	1	max(|1 − 2|, |1 + 2|) = 3	2
(2, 3)	(2, 3)	min(|2 − 3|, |2 + 3|) = 1	2	max(|2 − 3|, |2 + 3|) = 5	3
Example 2:

Input: nums = [-3,2,-1,4]

Output: 4

Explanation:

There are 4 perfect pairs:

(i, j)	(a, b)	min(|a − b|, |a + b|)	min(|a|, |b|)	max(|a − b|, |a + b|)	max(|a|, |b|)
(0, 1)	(-3, 2)	min(|-3 - 2|, |-3 + 2|) = 1	2	max(|-3 - 2|, |-3 + 2|) = 5	3
(0, 3)	(-3, 4)	min(|-3 - 4|, |-3 + 4|) = 1	3	max(|-3 - 4|, |-3 + 4|) = 7	4
(1, 2)	(2, -1)	min(|2 - (-1)|, |2 + (-1)|) = 1	1	max(|2 - (-1)|, |2 + (-1)|) = 3	2
(1, 3)	(2, 4)	min(|2 - 4|, |2 + 4|) = 2	2	max(|2 - 4|, |2 + 4|) = 6	4
Example 3:

Input: nums = [1,10,100,1000]

Output: 0

Explanation:

There are no perfect pairs. Thus, the answer is 0.
*/

class Solution {
    public long perfectPairs(int[] nums) {
        // int n = nums.length;
        // long count = 0;

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         int a = nums[i];
        //         int b = nums[j];

        //         int modMin = Math.min(Math.abs(a - b), Math.abs(a + b));
        //         int mod = Math.min(Math.abs(a), Math.abs(b));
        //         int modMax = Math.max(Math.abs(a - b), Math.abs(a + b));
        //         int modM = Math.max(Math.abs(a), Math.abs(b));

        //         if (modMin <= mod && modMax >= modM) {
        //             count++;
        //         }
        //     }
        // }

        // return count;

        int n = nums.length;
        long count = 0;
        int[] jurnavalic = Arrays.copyOf(nums, n);
        int[] absArr = new int[n];
        for (int i = 0; i < n; i++) {
            absArr[i] = Math.abs(jurnavalic[i]);
        }
        Arrays.sort(absArr);
        int start = 0;
        for (int i = 0; i < n; i++) {
            int y = absArr[i];
            int minRequired = (y + 1) / 2;
            while (start < i && absArr[start] < minRequired) {
                start++;
            }
            count += (i - start);
        }

        return count;
    }
}
