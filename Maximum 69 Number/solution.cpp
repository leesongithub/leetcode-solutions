// C++ solution to leetcode problem Maximum 69 Number
// https://leetcode.com/problems/maximum-69-number/
// Leeson Chen March 17 2020

class Solution {
public:
    int maximum69Number (int num) {
        bool sixyet = false; // so that we only change the first one
        string s = to_string(num); // convert the int to string. I know how to iterate over a string like an array in C++.
        
        for (int i=0; i<s.length(); i++)
        {
            if ((s[i] == '6') && (sixyet == false))
            { // change the first 6 to a 9
                s[i] = '9';
                sixyet = true;
            }
        }
        
        return stoi(s); // cast it from string back into an integer and return
    }
    /* leetcode result:
    Success
    Details
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
    Memory Usage: 7.3 MB, less than 100.00% of C++ online submissions for Maximum 69 Number.
    */
};