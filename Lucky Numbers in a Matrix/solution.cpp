// C++ solution to leetcode problem Lucky Numbers in a Matrix
// https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        /*        mins:
        [3   7  8] 3
        [9  11 13] 9
        [15 16 17] 15
    max: 15 16 17
        
        1. Get the minimums of each row
        2. Get the maximums of each column
        3. Return the intersection of those two groups
        */
        
        // getting the minimums of each row
        vector<int> mins;
        for (auto v : matrix)
            mins.push_back(*min_element(v.begin(), v.end()));
        
        // getting the maximums of each column
        vector<int> maxs;
        for (int c=0;c<matrix[0].size();c++)
        {
            int max = 0;
            for (int r=0;r<matrix.size();r++)
            {
                if (matrix[r][c] > max)
                    max = matrix[r][c];
            }
            maxs.push_back(max);
        }
        
        // set_intersection will not work if the vectors aren't sorted.
        sort(mins.begin(), mins.end());
        sort(maxs.begin(), maxs.end());
        
        // intersection of mins and maxs
        vector<int> intersection(mins.size() + maxs.size()); // [0 0 0 0 0 0]
        vector<int>::iterator it, st; 
        it = set_intersection(mins.begin(), mins.end(), 
                              maxs.begin(), maxs.end(), 
                              intersection.begin()); 
        
        /*
        intersection = [15 0 0 0 0 0]
        need it to be: [15]
        
        bad way to shave off zeros from end:
        for (int i=intersection.size()-1;i>=0;i--)
            if (intersection[i]==0)
            {
                intersection.pop_back();
                cout<<"pop ";
            }
            
        good way to shave off zeros from end:
        intersection.resize(it-intersection.begin());
        */
        intersection.resize(it-intersection.begin());
        
        return intersection;
    }
    /* leetcode results:
    Success
    Details
    Runtime: 24 ms, faster than 90.31% of C++ online submissions for Lucky Numbers in a Matrix.
    Memory Usage: 10.1 MB, less than 100.00% of C++ online submissions for Lucky Numbers in a Matrix.
    */
};