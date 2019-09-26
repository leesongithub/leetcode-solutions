// C++ solution for leetcode problem Implement strStr()
// https://leetcode.com/problems/implement-strstr/
// Leeson Chen September 25 2019

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // begin return value at -1, because -1 gets returned if we don't find the substring
        int index = -1;
        
        // if needle or haystack are empty strings, just return 0 (in spec)
        if (needle == "") { return 0; }
        if (needle.length() > haystack.length()) { return -1; }
        
        // iterate through string haystack looking for substring needle
        for (int i=0; i < haystack.length(); i++) {
            // one pass through haystack
            
            if (haystack[i] == needle[0]) {
                // possible match
                std::cout << "possible match at haystack's index " << i << std::endl;
                
                int needle_iterator = 0;
                int haystack_iterator = i;
                bool still_matches = true;
                
                while (needle[needle_iterator]) {
                    if (needle[needle_iterator] == haystack[haystack_iterator]) {
                        
                        // debugging output
                        //std::cout << "needle[" << needle_iterator << "] = haystack[" << haystack_iterator << "]\t\t";
                        //std::cout << needle[needle_iterator] << " == " << haystack[haystack_iterator] << std::endl;
                        
                        still_matches = true;
                    } else if (!haystack[haystack_iterator]) {
                        // reached end of haystack
                        std::cout << "reached end of haystack\n";
                        still_matches = false;
                        break;
                    } else if (needle[needle_iterator] != haystack[haystack_iterator]) {
                        // didn't match
                        std::cout << "broke the pattern\n";
                        still_matches = false;
                        break;
                    }
                    needle_iterator++;
                    haystack_iterator++;
                    
                }

                if (still_matches == true) {
                    index = i;
                    return index;
                }
                    

                
            }
            
        }
        return index;
        
        /* leetcode results:
Success
Details
Runtime: 1452 ms, faster than 5.04% of C++ online submissions for Implement strStr().
Memory Usage: 9.1 MB, less than 72.86% of C++ online submissions for Implement strStr().
        
        alright that's pretty bad but ok it works
        
        
        */
        
        /* Things I learned
        - too many for loops becomes very confusing, not to mention inefficient
        - base cases at the beginning are important
        - the syntax error if (variable = true) { ... } will fuck you up, because it always evaluates to true
        - leetcode has a limit to how much output you can print
        - this is a very sloppy, old-leeson-programming solution. try to make it better.
        
        */
        
        
    }
    
};
