// C++ solution to leetcode problem Defanging an IP Address
// https://leetcode.com/problems/defanging-an-ip-address/
// Leeson Chen September 25 2019

class Solution {
public:
    string defangIPaddr(string address) {
        // initialize blank string (this will be returned)
        string defanged = "";
        
        
        // here we turn the string address into a char array, so we can iterate through it
        // and compare single elements of it.
        // 20 just seemed like a safe number.
        char array[20];
        strcpy(array, address.c_str());
        
        
        // iterate through the address char array. 
        // for every element:
        
        
        int i = 0;
        while (array[i]) {
            if (isdigit(array[i])) {
                // if it's a number, concatenate it to the end of the string
                defanged = defanged + array[i];
            } else if (array[i] == '.') {
                // if it's a period, concatenate "[.]" instead
                defanged = defanged + "[.]";
            }
            i++; // don't forget to increment i; since this isn't a for loop.
            // (it's not a for loop because idk how to get the length of a char array)
        }
        
        // debugging output
        std::cout << defanged;
        
        // return the defanged string
        return defanged;
        
        // leetcode result:
        /* Success
Details
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 8.2 MB, less than 100.00% of C++ online submissions for Defanging an IP Address.
        */
    }
};
