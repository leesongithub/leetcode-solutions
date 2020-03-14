// C++ solution to leetcode problem Number of steps to reduce a number to zero
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// Leeson Chen March 14 2020

class Solution {
public:
    int numberOfSteps (int num) {
        int steps = 0;
        while (num != 0)
        {
            if (num %2 == 0) 
            {
                num /= 2;
                steps++;
            }
            if (num %2 == 1)
            {
                num--;
                steps++;
            }
        }
        return steps;
        
        /* leetcode result:
        Success
        Details
        Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
        Memory Usage: 7.4 MB, less than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
        */
        
    }
};