// C++ solution to leetcode problem Flipping an Image
// https://leetcode.com/problems/flipping-an-image/
// Leeson Chen March 18 2020

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        // Horizontally flip each smaller vector
        for (int i=0;i<A.size();i++)
        {
            reverse(A[i].begin(), A[i].end());
        }
        
        // Invert the values
        for (int r=0; r<A.size();r++) // for each row
         {
             for (int c=0; c<A[0].size();c++) // for each column within the row
             {
                 if (A[r][c] == 1)
                     A[r][c] = 0;
                 else if (A[r][c] == 0)
                     A[r][c] = 1;
             }
        }
        
        return A;
    }     
    /* leetcode result:
    Success
    Details
    Runtime: 12 ms, faster than 69.69% of C++ online submissions for Flipping an Image.
    Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Flipping an Image.
    
    So today, we learned an important lesson:
    Those super convenient for (auto i : v) loops--
    i is a REFERENCE to the value (note: not sure if I'm using the word "reference: 100% correctly)
    e.g. for a vector v = {0,1,2}, iterating over it with an auto i : v loop
        i is a COPY of 0, then a copy of 1, then 2, etc. 
    However, while convenient for cases where a copy / mirror image of the value works fine (e.g. printing)
    This CANNOT be used to modify the values in that vector.
    
    You can try this yourself as follows:
        vector<int> v = {0,1,2,3};
        for (auto i : v)
            i++;
        for (auto i : v)
            cout<<i<<" "
    And you'll see from the output, v is STILL {0,1,2,3}. The values have not been incremented. 
    
    THIS is why calling reverse() on the vectors didn't work-- it had nothing to do with them being nested.
    Additionally this is why cout can have an error printing i from a nested vector v.
    
    So, to be explicit-- in order to reverse the elements of nested vectors (really, to do anything to elements of nested vectors)
    vector<vector<int>> Vv = {{1,2,3},{5,6,7},{9,10,11}};
    for (auto v : Vv) // This DOES NOT work.
    {
        reverse(v.begin(), v.end());
    }
    for (int i=0;i<Vv.size();i++) // This DOES work.
    {
        reverse(Vv[i].begin(), Vv[i].end());
    }
    */
};