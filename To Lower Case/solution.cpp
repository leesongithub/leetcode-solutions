// C++ solution to leetcode problem To Lower Case
// https://leetcode.com/problems/to-lower-case/
// Leeson Chen September 25 2019

class Solution {
public:
    string toLowerCase(string str) {
        
        /* so every character is really a representation of a number
        unicode? ascii? utf? i don't know
        
        but there's a numerical relation between every capital letter and its lowercase
        
        partial ASCII table: 
        A = 65      a = 97
        B = 66      b = 89
        C = 67      c = 99
        D = 68      d = 100
        E = 69      e = 101
        F = 70      f = 102
        ...         ...
        Y = 89      y = 121
        Z = 90      z = 122
        
        so capital to lowercase is +32
        
        we'll need to use if letter() and if upper case()
        
        if ifuppercase doesn't exist / is blocked
        we can check the range (if between 65 and 90)
        similarly if between 65-90 and 97-122 then it's a letter
        
        to access the ASCII value of each character:
        char c
        int(c)
        well that's easy
        
        then convert the ASCII number back to a char with:
        int i
        char(i)
        wow that's also easy
        
        then swap out
        */
        
        for (int i=0; i<str.length(); i++) {
            // convert the current character in string to char then ASCII value
            char c = str[i];
            int c_i = int(c);
            
            // check if it's a letter and upper case (65-90 inclusive range)
            if ((c_i >= 65) && (c_i <= 90)) {
                c_i += 32;
                c = char(c_i);
            }
            
            // swap out
            str[i] = c;
            // wow you really can just treat it like an array! i never knew!
            
        }
        
        return str;
        
        /* leetcode result:
Success
Details
Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
Memory Usage: 8 MB, less than 100.00% of C++ online submissions for To Lower Case.
        
        */
        
        /* Things I learned:
        - convert character c to its ASCII integer value with int(c)
        - reverse: convert int i to ASCII character with char(i)
        - you can swap out letters of a string just like an array:
          str[i] = c
        - all i'm changing is comments and leetcode runtime and memory are 
          varying from 100% to 49% to 25%
        */
        
    }
};
