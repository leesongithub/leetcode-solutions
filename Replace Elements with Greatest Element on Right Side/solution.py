# Python3 solution for leetcode problem Replace Elements with Greatest Element on Right Side
# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
# Leeson Chen March 17 2020

class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        # the -1 is necessary because an array of length 2 has indexes [0, 1]
        maxint = arr[len(arr)-1]
        
        for i in range(len(arr)):
            # current position for moving backwards is len(arr)-1-i
            if (arr[len(arr)-1-i] > maxint):
                maxint = arr[len(arr)-1-i]
                # if it's greater than the max, then this is the new max
            elif (arr[len(arr)-1-i] < maxint):
                arr[len(arr)-1-i] = maxint
                # if it's less than the max, change it 
        
        # a little cleaner than my C++ solution; no creating a second array.
        arr.pop(0) # remove first element
        arr.append(-1) # instead of .push()
        
        return arr
    
    ''' leetcode results:
    Success
    Details
    Runtime: 140 ms, faster than 35.10% of Python3 online submissions for Replace Elements with Greatest Element on Right Side.
    Memory Usage: 13.9 MB, less than 100.00% of Python3 online submissions for Replace Elements with Greatest Element on Right Side.
    '''