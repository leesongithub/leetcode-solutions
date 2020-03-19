// C++ solution to leetcode problem Squares of a Sorted Array
// https://leetcode.com/problems/squares-of-a-sorted-array/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        /*
        BOI it's time to think about COMPLEXITY
        
        So this solution works:
            for (int i=0; i<A.size();i++)
            {
                A[i] = A[i]*A[i];
            }
            sort(A.begin(), A.end());
            return A;
        Just square each integer in A (replacing it) and then sort the array. Then return.
        The issue with this? Its complexity. 
        Going through the array and squaring is one pass O(n)
        But the C++ std sort() function is O(nlogn)
        Meaning that the entire solution is O(n^2 logn)
        
        So that's why this solution gets the following leetcode result:
        Success
        Details
        Runtime: 112 ms, faster than 50.16% of C++ online submissions for Squares of a Sorted Array.
        Memory Usage: 12.7 MB, less than 100.00% of C++ online submissions for Squares of a Sorted Array.
        We can improve.
        
        There IS a way to do this in one pass!
        Create a new empty vector, "results".
        Now, the key here is that the vector provided to us, A, is already sorted (increasingly) but can have negative numbers.
        And a negative number squared can be larger than a positive number squared.
        So we need to work inwards, toward the middle of the array from both ends,
        constantly checking to see whether the left end or right end squared would give a bigger result
        and then putting that larger of the two into our results vector
        */
        
        vector<int> results(A.size()); // create new vector the same size as A
        int left = 0, right = A.size()-1; // left and right pointers, right is -1 because off by 1
        for (int i=A.size()-1; i>=0; i--)
        {
            
            if (A[left]*A[left] > A[right]*A[right]) // if left squared is larger, insert
            {
                results[i] = A[left]*A[left];
                left++; // move the left pointer further right
            }
            else // if the right squared is larger, insert
            {
                results[i] = A[right]*A[right];
                right--; // move the right pointer further left
            } 
            
            // you can do all of that with just this one line, but it is not faster.
            //results[i] = (A[left]*A[left] > A[right]*A[right]) ? A[left]*A[left++] : A[right]*A[right--];
            // yeah apparently you can increment / decrement in that same line too ^                    ^
        }
        return results;
        /* leetcode results:
        Success
        Details
        Runtime: 88 ms, faster than 98.90% of C++ online submissions for Squares of a Sorted Array.
        Memory Usage: 12.7 MB, less than 100.00% of C++ online submissions for Squares of a Sorted Array.
        */
    }
};