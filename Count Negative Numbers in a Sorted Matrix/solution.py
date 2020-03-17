# Python3 solution to leetcode problem Count Negative Numbers in a Sorted Matrix
# https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
# Leeson Chen March 17 2020

class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        result = 0;
        for i in grid:
            for j in i:
                if j < 0:
                    result +=1
        return result
    ''' leetcode result:
    Success
    Details
    Runtime: 116 ms, faster than 98.07% of Python3 online submissions for Count Negative Numbers in a Sorted Matrix.
    Memory Usage: 13.9 MB, less than 100.00% of Python3 online submissions for Count Negative Numbers in a Sorted Matrix.
    '''