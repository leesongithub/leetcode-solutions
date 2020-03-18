// C++ solution to leetcode problem Sort Array By Parity
// https://leetcode.com/problems/sort-array-by-parity/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        for (auto i : A) // push all even numbers
            if (i%2==0)
                result.push_back(i);
        for (auto i : A) // push all odd numbers
            if (i%2==1)
                result.push_back(i);
        return result;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 24 ms, faster than 96.38% of C++ online submissions for Sort Array By Parity.
    Memory Usage: 9 MB, less than 100.00% of C++ online submissions for Sort Array By Parity.
    */
};