// C++ solution to leetcode problem Minimum Depth of Binary Tree
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Leeson Chen October 1 2019


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        
        int depth = 0;
        
        // every time the tree ends, put the depth of that bottom node here
        vector<int> depths;
        
        // edge case: if the tree is empty (no root), return the 0 depth
        if (!root) { return depth; }
        
        // recursive function
        Explorer(root, depth, depths);
        
        
        // print depths vector
        /*
        cout << "printing vector\n";
        for (int i=0; i<depths.size(); i++) {
            cout << depths[i] << " ";
        }
        */
        
        // this is a weird pointer-ey way to get the minimum element of a vector
        // you need to tell it the iterator range (begin-end means the whole thing)
        return *min_element(depths.begin(), depths.end()); 
        
        /* leetcode result:
Success
Details
Runtime: 12 ms, faster than 76.13% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 20.1 MB, less than 47.62% of C++ online submissions for Minimum Depth of Binary Tree.
        */
        
        /* What I learned:
        - how to use a & reference parameter, and why it's important
        - recursive functions are actually pretty easy to write
        - using trees is also pretty easy
        - always check for weird edge cases like empty input at the beginning
        - simple line to get the minimum element of a vector v:
          *min_element(v.begin(), v.end());
        */
    }
    
    int Explorer(TreeNode* current, int depth, vector<int>& depths) {
        // it needs to have a & (reference). Without the &, it wasn't creating any vector
        // what I can surmise from this is that passing in something by reference allows the function
        // to directly modify its value
        
        // the start of this function means it was called, meaning that we just went deeper by one
        depth++;
        
        // if there's no right or left node from here, we're at a bottom node
        if ((current->right == NULL) && (current->left == NULL)) {
            // debugging output
            std::cout << "bottom at " << current->val << " with depth of " << depth << endl;
            // put the depth of this bottom node into our depths vector
            depths.push_back(depth);
        }
        
        // recursion step
        if (current->right) {
            Explorer(current->right, depth, depths);
        }
        if (current->left) {
            Explorer(current->left, depth, depths);
        }
        
        return depth;
    }
    
};
