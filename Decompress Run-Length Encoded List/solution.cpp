// C++ solution to leetcode problem Decompress Run-Length Encoded List
// https://leetcode.com/problems/decompress-run-length-encoded-list/
// Leeson Chen March 14 2020

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        std::vector<int> result;
        int freq, val = 0;
        
        for (int i=0; i<nums.size();i+=2)
        {
            freq = nums[i];
            val = nums[i+1];
            cout << "freq = " << freq << " and val = " << val << ".\n";
            for (int j=0;j<freq;j++)
            {
                result.push_back(val);
            }
            
            /* Counting by 2 through a for loop:
            ;i+2 does not work
            ;i++++ does not work
            ;i=i+2 DOES WORK
            ;i+=2 DOES WORK
            */
            
            /* Making a new hardcoded array and iterating through:
            int arr[] = {1, 2, 3} DOES WORK
            arr = [1, 2, 3] does not work 
            (must be curly braces, not straight brackets)
            (need "int")
            */
        }
        
        return result;
        
        /* leetcode result:
        Success
        Details
        Runtime: 36 ms, faster than 99.85% of C++ online submissions for Decompress Run-Length Encoded List.
        Memory Usage: 9.5 MB, less than 100.00% of C++ online submissions for Decompress Run-Length Encoded List.
        */
    }
};