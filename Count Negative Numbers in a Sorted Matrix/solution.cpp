// C++ solution to leetcode problem Count Negative Numbers in a Sorted Matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// Leeson Chen March 17 2020

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int result = 0; 
        for (auto i : grid)
        {
            for (auto j : i)
            {
                if (j < 0)
                    result++;
            }
        }
        return result;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 16 ms, faster than 93.28% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
    Memory Usage: 9.8 MB, less than 100.00% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
    
    note: removing the curly braces works but makes it slower:
    
    for (auto i : grid)
            for (auto j : i)
                if (j < 0)
                    result++;
    20 ms / 57%
    */
};