// C++ solution to leetcode problem Hamming Distance
// https://leetcode.com/problems/hamming-distance/
// Leeson Chen March 18 2020

class Solution {
public:
    int hammingDistance(int x, int y) {
        /* Plan:
        convert both integers to binary, then get the xor
        then tally the 1's in the xor
        */
        
        int z = x xor y, result = 0;
        while (z>0)
        {
            if (z%2 == 1)
                result++;
            z /=2;
        }
        
        return result;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
    Memory Usage: 7.4 MB, less than 100.00% of C++ online submissions for Hamming Distance.
    */
};