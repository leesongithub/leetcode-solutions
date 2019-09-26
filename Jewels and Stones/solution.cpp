// C++ solution to leetcode problem Jewels and Stones
// https://leetcode.com/problems/jewels-and-stones/
// Leeson Chen September 25 2019

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        
        // naive solution:
        /*
        // turn both J and S into char arrays so we can iterate through them 
        // and compare elements
        char jewels[51]; // fpr some reason 50 failed test cases, but 51 passes them. 
        char stones[51];
        strcpy(jewels, J.c_str());
        strcpy(stones, S.c_str());
        
        int hits = 0;
        // naive n^2 solution: compare every element of J with every element of S
        int j = 0;
        while (jewels[j]) {
            int s = 0;
            while (stones[s]) {
                if (jewels[j] == stones[s]) {
                    hits++;
                    //debugging output
                    std::cout << jewels[j] << "==" << stones[s] << std::endl;
                }
                s++;
            }
            j++;
        }
        return hits;
        // leetcode result:
/* Success
Details
Runtime: 4 ms, faster than 64.98% of C++ online submissions for Jewels and Stones.
Memory Usage: 8.5 MB, less than 53.75% of C++ online submissions for Jewels and Stones.
*/
        
        
        // faster hash map solution:
            
        // i guess unordered_map is the same as a hash map in c++ stdlib
        unordered_map<char, int> hashmap;
        // every character in J is mapped to just its iterator number
        for(int i = 0; i < J.length(); i++){ // .length() for strings
            hashmap[J[i]]++; // this line is difficult.
            // i guess it just places into the hash map element J[i] linked to the number i
            // unsure what the ++ does. maybe it increments the hash map for next one?
        } 
        // also, i guess you can just do J[i] without needing to convert J
        // into an array first? wow that's useful.
        
        int hashcollisions = 0; // same thing as hits
        for(int i = 0; i < S.length(); i++){ // .length() is valid for strings
            if(hashmap.count(S[i])){
                // dunno what hashman.count() does, but i guess checks for a collision?
                hashcollisions++;
            }
        }
        return hashcollisions;
        // leetcode result:
/* Success
Details
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
Memory Usage: 8.7 MB, less than 25.00% of C++ online submissions for Jewels and Stones.
*/
        
        // so yes, the hash map is obviously better
        /* Things I learned from this:
        - .length() is what you use for a string's length
        - you can just treat a string as an array with str[i]
          no need for fancy array[256]; strcpy(array, str.c_str()) shenanigans
        - unordered_map<  > is a hash map in c++!
        - inserting into the hash map is extremely simple:
          hashmap[str[i]]++;        to insert str[i] element
          hashmap.count(str[i]);    to check for a collision with str[i] element
        
        */
    }
    
};
