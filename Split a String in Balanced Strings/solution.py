# Python3 solution to leetcode problem Split a String in Balanced Strings
# https://leetcode.com/problems/split-a-string-in-balanced-strings/
# Leeson Chen March 15 2020

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        # "results, balance = 0" this line is invalid syntax
        # however, "results = balance = 0" does work
        results = 0
        balance = 0
        
        '''
        # This is the usual way I'd write this code:
        
        for i in range(len(s)):
            if s[i] == 'R': # yes you do need single-quotes around characters. They are not assumed; python expects R to be a variable actually.
                balance += 1 # remember that ++ and -- don't work in python
            elif s[i] == 'L': # "else if" is invalid syntax. use "elif"
                balance -= 1
            if balance == 0:
                results += 1
                
        But using the condensed for-loop syntax:
        
        for i in s:
            if i =='R':
                balance +=1
            else if i == 'L':
                balance -= 1
            if balance == 0:
                results +=1
                
        And then combining that with the 1-line ternary operator:
        syntax: TrueStuff if (Condition) else Falsestuff
        
        for i in s:
            balance += 1 if (i == 'R') else -1
            if balance == 0:
                results += 1
        '''
        
        for i in s:
            balance += 1 if (i == 'R') else -1
            if balance == 0:
                results += 1
        
        
        return results
    
    ''' leetcode results:
    Success
    Details
    Runtime: 24 ms, faster than 89.60% of Python3 online submissions for Split a String in Balanced Strings.
    Memory Usage: 13 MB, less than 100.00% of Python3 online submissions for Split a String in Balanced Strings.
    '''