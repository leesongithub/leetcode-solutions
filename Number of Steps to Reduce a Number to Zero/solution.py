# Python solution to leetcode problem Number of Steps to Reduce a Number to Zero
# https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
# Leeson Chen March 14 2020

class Solution:
    def numberOfSteps (self, num: int) -> int:
        steps = 0
        while num != 0:
            if num%2 == 0: # python doesn't have .isEven() or .isOdd() for integers?
                num = num / 2
                steps += 1 
                # apparently python doesn't use ++ and -- to increment/decrement
            if num%2 == 1:
                num -= 1
                steps += 1
        return steps
    
    """
    leetcode result:
    Success
    Details
    Runtime: 32 ms, faster than 17.70% of Python3 online submissions for Number of Steps to Reduce a Number to Zero.
    Memory Usage: 12.9 MB, less than 100.00% of Python3 online submissions for Number of Steps to Reduce a Number to Zero.
    
    also, apparently python doesn't have block comments so this is the next best option
    """