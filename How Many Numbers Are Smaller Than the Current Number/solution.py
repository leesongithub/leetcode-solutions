# Python3 attempt at solving leetcode problem How Many Numbers Are Smaller Than the Current Number
# https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
# Leeson Chen March 14 2020


class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        
        result = [] #result: List[int] is the wrong syntax (whatver it is in the function header)
        for current in range (len(nums)):
            numLesser = 0
            for compared in range (len(nums)):
                if compared < current:
                    numLesser += 1 
            print('When current is {} and compared is {} then numLesser is {}'.format(current,compared,numLesser))
            result.insert(len(result), numLesser) # you can't just do .insert(num). you need an index.
            
        return result
    
    '''
    This doesn't work lol. I don't know what the issue is with the for loops not working inside one another.
    '''