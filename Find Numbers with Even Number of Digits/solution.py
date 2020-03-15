# Python3 solution to leetcode problem Find Numbers with Even Number of Digits
# https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
# Leeson Chen March 14 2020

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        # import math # you'd normally need to do this to use math.floor() but leetcode has it already
        
        # helper function to count the number of digits in a number n
        def numDigits(n):
            # numDigits(int n) is invalid syntax
            digits = 0
            while n>0:
                n = math.floor(n / 10)
                # because python is a duck type language, dividing two integers automatically converts into a double result.
                # to avoid the decimal points, use the floor function (ex: 3.1415 -> 3)
                digits += 1
            return digits

        result = 0    
        for i in range(len(nums)):
            if numDigits(nums[i])%2 == 0:
                result +=1;
        return result

    ''' leetcode result:
    Success
    Details
    Runtime: 64 ms, faster than 17.05% of Python3 online submissions for Find Numbers with Even Number of Digits.
    Memory Usage: 12.9 MB, less than 100.00% of Python3 online submissions for Find Numbers with Even Number of Digits.
    '''