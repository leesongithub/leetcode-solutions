// C++ solution to leetcode problem Find Numbers with Even Number of Digits
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Leeson Chen March 14 2020

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int result = 0;
        for (int i=0;i<nums.size();i++)
        {
            if (numDigits(nums[i]) %2 == 0) 
            {
                result++;
            }
        }
        
        return result;
    }
    
    int numDigits(int num) {
        
        int digits = 0;
        
        while (num>0)
        {
            num /= 10; // because these are integers, and not doubles, dividing does not create decimal points.
            digits++;
        }
        
        return digits;
    }
    
    /* leetcode result:
    Success
    Details
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
    Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
    */
};