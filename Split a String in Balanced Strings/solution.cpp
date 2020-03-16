// C++ solution to leetcode problem Split a String in Balanced Strings
// https://leetcode.com/problems/split-a-string-in-balanced-strings/
// Leeson Chen March 15 2020

class Solution {
public:
    int balancedStringSplit(string s) {
        
        
        int results = 0, balance = 0;
        // This line gave me the biggest fucking headache. 
        // Apparently, int x, y = 0; is INCORRECT syntax and x becomes some random value from memory.
        
        /* Number Line approach:
        Think of a point on the zero of a number line. 
        For every R it moves right (positively), for every L it moves left (negatively)
                - ----0---- +
                 <-L      R->
        When that point ("balance") reaches 0 again, it means an equal number of Ls and Rs have occurred.
        
        This is the USUAL way I would type this code:
        
        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == 'R')
            {
                balance++;
            } 
            else if (s[i] == 'L')
            {
                balance--;
            }
            
            if (balance == 0)
            {
                results++;
            }
        }
        
        
        But now, using the power of an alternative for-loop (and taking out some braces), 
        I can condense the code into the following:
        
        for (auto i : s)
        {
            if (i == 'R')
                balance++;
            else if (i == 'L')
                balance--;
            
            if (balance == 0)
                results++;
        }
        
        And on top of that, I can use a ternary operator to condense it even further:
        
        for (auto i : s)
        {
            i == R ? balance++ : balance--; // Note: this decrements for ANY letter besides R.
            if (balance == 0)
                results++;
        }
        
        */
        
        for (auto i : s)
        {
            i == 'R' ? balance++ : balance--; // Note: this decrements for ANY letter besides R.
            if (balance == 0)
                results++;
        }
        
        return results;
    }
    
    /* leetcode results:
    Success
    Details
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
    Memory Usage: 7.9 MB, less than 100.00% of C++ online submissions for Split a String in Balanced Strings.
    */
};