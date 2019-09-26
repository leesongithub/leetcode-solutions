// C++ solution for leetcode problem Remove Element
// https://leetcode.com/problems/remove-element/
// Leeson Chen September 25 2019

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] == val) {
                std::cout << "found a hit at " << i << std::endl;
                nums[i] == NULL; // this doesn't work to erase it
                nums.erase(nums.begin() + i);
                i--; // this is the important step. because you removed something, everything shifted left 1. 
            }
            
        }
        std::cout << "new size of nums is " << nums.size() << std::endl;
        return nums.size();
        
        /* leetcode result:
Success
Details
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
Memory Usage: 8.5 MB, less than 97.06% of C++ online submissions for Remove Element.
        */
        
        /* okay wow, that worked
        i did that pretty quickly and didnt try too hard on it
        
        so first of all, based on the ratio of likes to dislikes, this question is poorly worded
        
        you really only return the length of the new vector, but from the output it looks like the vector's being returned
        
        anyway the solution is pretty simple:
        - iterate through nums 
        - if current value is a match, remove it
        - (this is done with line 9)
        - important step: decrementing i-- because everything moves forward a position when you erase something
        
        Things I learned:
        - .size() for vectors
        - .length() for strings
        - erase an element at position i from a vector v with:
          v.erase(v.begin() + i);
        - pay attention to the like-dislike ratio on leetcode problems. they may be poorly made.
        
        */
    }
};
