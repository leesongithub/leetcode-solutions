// C++ solution to leetcode problem Subtract the Product and Sum of Digits of an Integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Leeson Chen March 14 2020

class Solution {
public:
    int subtractProductAndSum(int n) {
        /*
        Plan: create a vector, put all its digits in, do the prod/sum operations and find difference.
        */
        
        std::vector<int> digits;
        int copy, sum = 0;
        int product = 1;
        
        while (n > 0)
        {
            copy = n;
            while (copy>9)
            {
                copy = copy%10; // this gives the LOWEST digit, not the highest!
            }
            // at this point, "copy" should be n's lowest digit
            
            // put that highest digit into the digits vector
            digits.insert(digits.begin(), copy);
            /*
            seems like c++ push_front() only works for lists, not vectors
            even though vectors have push_back() lol
            instead you can insert to the begin index as above
            */
            
            // now reduce n
            n = (n-copy)/10; // i.e. 234 -> (234-4)/10 -> 230/10 -> 23
        }
        
        for (int i=0;i<digits.size();i++)
        {
            product *= digits[i];
            sum += digits[i];
        }
        
        return product - sum;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
    Memory Usage: 7.3 MB, less than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
    */
};