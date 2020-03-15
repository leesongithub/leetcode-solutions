# Python3 solution to leetcode problem Subtract the Product and Sum of Digits of an Integer
# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
# Leeson Chen March 14 2020

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        
        digits = []
        
        while n>0:
            copy = n
            while copy>9:
                copy = copy%10
            digits.insert(0, copy)
            n = (n-copy)/10
            
        prod = 1
        Sum = 0
        for i in range (len(digits)):
            # invalid syntax: "for i in digits:"
            prod *= digits[i]
            Sum += digits[i]
            
        # "prod-Sum" gives 15.0, instead of just "15" because it's a float for some reason. Cast to int
        return int(prod - Sum)
    
    ''' leetcode result:
    Success
    Details
    Runtime: 24 ms, faster than 85.23% of Python3 online submissions for Subtract the Product and Sum of Digits of an Integer.
    Memory Usage: 12.9 MB, less than 100.00% of Python3 online submissions for Subtract the Product and Sum of Digits of an Integer.
    
    surprisingly good?
    '''