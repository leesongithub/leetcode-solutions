// C++ solution to leetcode problem Self Dividing Numbers
// https://leetcode.com/problems/self-dividing-numbers/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result;
        for (int i=left; i<=right;i++)
        {
            if (isSelfDividing(i))
                result.push_back(i);
        }
        return result;
    }
    bool isSelfDividing(int n)
    {
        list<int> digits; // using a list instead of a vector because vectors don't have push_front
        int copy = n;
        bool result = true;
        while (copy>0)
        {
            digits.push_front(copy%10);
            copy/=10;
        }
        
        for (auto i : digits)
        {
            if (i==0)
                result = false;
            else if (n%i != 0)
                result = false;
        }
        
        return result;
    }
    /* leetcode result: 
    Success
    Details
    Runtime: 28 ms, faster than 6.61% of C++ online submissions for Self Dividing Numbers.
    Memory Usage: 17.1 MB, less than 8.00% of C++ online submissions for Self Dividing Numbers.
    
    holy shit that's really slow lmao
    */
};