# Python3 solution to leetcode problem Maximum 69 Number
# https://leetcode.com/problems/maximum-69-number/
# Leeson Chen March 17 2020

class Solution:
    def maximum69Number (self, num: int) -> int:
        
        # change the int to an array of chars
        s = str(num)
        arr = list(s)
        
        # change the first 6 to a 9
        for i in range(len(arr)):
            if arr[i] == '6':
                arr[i]='9'
                break
              
        # change the char array to an int array
        for i in range(len(arr)):
            if arr[i] == '6':
                arr[i]=6
            elif arr[i] == '9':
                arr[i]=9
        
        # add all the integers by powers of 10
        result = 0
        for i in range(len(arr)):
            result += arr[i]*(math.pow(10, len(arr)-1-i))
            print(result)
            
        # cast to an int and return
        return int(result)
    
    ''' leetcode result:
    Success
    Details
    Runtime: 20 ms, faster than 96.29% of Python3 online submissions for Maximum 69 Number.
    Memory Usage: 12.9 MB, less than 100.00% of Python3 online submissions for Maximum 69 Number.
    
    There's definitely a faster way to do this.
    
    I only added some comments and the speed jumped from 32ms/19.4% --> 20ms/96.29%
    Huge variation from comments, now it's 61%
    '''