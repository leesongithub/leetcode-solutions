// C++ solution to leetcode problem Replace Elements with Greatest Element on Right Side
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// Leeson Chen March 17 2020

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int max = arr[arr.size()-1];
        
        for (int i=arr.size()-2; i>=0;i--)
        {
            if (arr[i] < max) // if this is less than the max
            {
                // set current element to the max
                arr[i] = max;
            }
            else if (arr[i] >= max) // if the current element is greater than the max
            {
                // set this as the new max
                max = arr[i];
            }
        }
        
        // upset about this part. I wanted to do everything in the original vector and return arr
        // but i kept getting off-by-1 errors so this was ultimately simpler:
        // create a new vector, put in everything but the first element from arr, then add -1 to the end.
        vector<int> v2 = {};
        v2.insert(v2.end(), arr.begin()+1, arr.end());
        v2.push_back(-1);
        //arr[arr.size()-1] = -1;
        return v2;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 48 ms, faster than 93.83% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
    Memory Usage: 10.1 MB, less than 100.00% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
    */
};