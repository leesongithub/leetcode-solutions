// C++ solution to leetcode problem Find N Unique Integers Sum up to Zero
// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
// Leeson Chen March 17 2020

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        
        if (n == 1)
        {
            v.push_back(0);
            return v;
        }
        else if (n%2 == 1)
        {
            for (int i=n-1; i>0;i-=2)
            {
                v.push_back(i);
                v.push_back(i*-1);
            }
            v.push_back(0);
            return v;
        }
        else if (n%2 == 0)
        {
            for (int i=n-1; i>0;i-=2)
            {
                v.push_back(i);
                v.push_back(i*-1);
            }
            return v;
        }
        return v;
    }
    
    /* A really handy, nicely-formatted function for printing vectors of any type
    void printv(vector<int> v)
    {
        cout << "\n[";
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "]\n";
    }
    */
    /* leetcode results:
    Success
    Details
    Runtime: 4 ms, faster than 98.09% of C++ online submissions for Find N Unique Integers Sum up to Zero.
    Memory Usage: 7.8 MB, less than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
    */
};