# Python3 solution to leetcode problem Decompress Run-Length Encoded List
# https://leetcode.com/problems/decompress-run-length-encoded-list/
# Leeson Chen, March 14 2020

class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        
        results = []
        
        # This is a custom for-loop I got from the internet.
        # It allows me to count by 2, or some other number than 1
        # Also, it looks like you can just create a new method within a current method.
        def CustomRange(start, end, step):
            while start <= end:
                yield start
                start += step

        # but apparently one side effect of this for loop is going out-of-bounds by 1, thus len-1
        for i in CustomRange(0, len(nums)-1, 2):
            freq = nums[i]
            val = nums[i+1]
            for x in range (freq):
                results.insert(len(results), val) 
                # inserting into a list in python requires an index of insertion.
                # I can't just do .insert(val)
                
        return results
    
    """
    leetcode results:
    Success
    Details
    Runtime: 76 ms, faster than 24.45% of Python3 online submissions for Decompress Run-Length Encoded List.
    Memory Usage: 13.2 MB, less than 100.00% of Python3 online submissions for Decompress Run-Length Encoded List.
    
    alright pretty bad, but at least it works. and i learned some python.
    """