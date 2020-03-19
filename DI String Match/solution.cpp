// C++ solution to leetcode problem DI String Match
// https://leetcode.com/problems/di-string-match/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<int> diStringMatch(string S) {
        /* Plan: 
        start from the extreme ends of the available integers, i.e. the min and the max of the range
        (where min = 0 and max = the length of S)
        starting from the beginning of S:
        if the current character is I (increasing), insert the minimum then shorten the range (raise min)
        if the current character is D (decreasing), insert the maximum then shorten the range (lower max)
        this works because ANY number after the min/max will be larger/smaller respectively, in that shortened range
        and the very last number is when min == max, so insert that and return.
        */
        vector<int> A;
        int min = 0, max = S.length(); // yes, the () are needed on length()
        
        for (int i=0; i<=S.length();i++)
        {
            if (S[i] == 'I')
            {
                A.push_back(min);
                min++;
            } 
            else if (S[i] == 'D')
            {
                A.push_back(max);
                max--;
            }
            else // at this point min == max
            {
                A.push_back(min);
            }
        }
        
        return A;
    }
    /* leetcode results:
    Success
    Details
    Runtime: 36 ms, faster than 93.91% of C++ online submissions for DI String Match.
    Memory Usage: 9.9 MB, less than 92.86% of C++ online submissions for DI String Match.
    */
};