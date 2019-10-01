// C++ solution to leetcode problem Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/
// Leeson Chen October 30 2019

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        /*
        number of elements in nums2 = number of elements to initialize = n
        
        */
        
        int placeinnums2 = 0;
        //int thingstoinitialize = n;
        
        // put everything into nums1 vector
        for (placeinnums2; placeinnums2<n; placeinnums2++) {
            nums1[m+placeinnums2] = nums2[placeinnums2];
        }
        
        // sort it
        sort(nums1.begin(), nums1.end());
        
        /*
        leetcode result:
Success
Details
Runtime: 4 ms, faster than 84.07% of C++ online submissions for Merge Sorted Array.
Memory Usage: 8.7 MB, less than 89.13% of C++ online submissions for Merge Sorted Array.
        */
        
        /*
        What I learned:
        - C++ has a really easy sort built in, just sort(starting location, ending location)
		  ex: to sort the whole array, it's:
		  sort(arr.begin(), arr.end());
		- passing in parameters by reference (using &) will directly change those values
		*/
    }
};
