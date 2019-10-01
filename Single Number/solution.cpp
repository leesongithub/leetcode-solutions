// C++ solution to leetcode problem Single Number
// https://leetcode.com/problems/single-number/
// Leeson Chen October 1 2019

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            XOR ^= nums[i]; 
        }
        /*
        So what this loop does is basically XOR the entire array.
        I'm not sure exactly how it does it, or what the time complexity is
        But the math of a XOR (exclusive or) is such that it's only true for inequal inputs
                    x | y | x XOR y
                    0 | 0 |   0
                    0 | 1 |   1
                    1 | 0 |   1
                    1 | 1 |   0
        So for some bit 'a':
                    a XOR 0 = a
                    a XOR a = 0
        And for an entire array [a, b, d, c, b, a, c ...]:
                    a XOR b XOR d XOR c XOR b XOR a XOR c ...
        by the associative property:
                    a XOR a XOR b XOR b XOR c XOR c XOR d ...
                       0    XOR    0    XOR    0    XOR d ...
                             0          XOR          d ...
                                         d
        */
        
        return XOR;
        
        /* leetcode result
Success
Details
Runtime: 16 ms, faster than 67.03% of C++ online submissions for Single Number.
Memory Usage: 9.6 MB, less than 98.77% of C++ online submissions for Single Number.
        */
        
        /* What I learned:
        - how to perform XOR on an entire array
        - how XOR works on an array
        
        */
    }
};
