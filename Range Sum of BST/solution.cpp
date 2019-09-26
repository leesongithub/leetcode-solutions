// C++ solution to leetcode problem Range Sum of BST
// https://leetcode.com/problems/range-sum-of-bst/
// Leeson Chen September 25 2019

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        /* first just some recap of BSTs:
        For the given sequence [10,5,15,3,7,null,18]:
        
                        10
                       /  \
                      5    15
                     / \  /  \
                    3  7 null 18
                    
        Left side must be less than parent, right side must be greater than parent.
        
        
        i think we pretty much need to use a recursive algorithm here
        cuz there's no way to remember checked nodes without it
        
        depth first search and breadth first search are pretty much equal here
        since regardless we're searching the whole tree
        
        remember: if (L < int < R) is invalid syntax unfortunately.
        
        so, a recursive function is a function that can call itself inside, 
        but also has a base case to escape
        
        let's call our recursive function Explorer
        because it's gonna explore deep into the tree
        Explorer needs to be able to do 3 things:
        1. for the value it's currently looking at, add to sum if in range
        2. if there's a left child, explore that (call itself for left child)
        3. if there's a right child, explore that (call itself for right child)
        
        so in pseudocode, something like:
        Explorer() {
        if (L < val < R) { sum += val; }
        if (left child) { Explorer(left child); }
        if (right child) { Explorer(right child); }
        }
        
        as for parameters, Explorer needs to know the following things:
        - what node do i need to explore
        - what's the current sum (so i can add to it)
        - what's the range (i.e., pass in L and R)
        so four parameters?
        it pretty much looks like the leetcode-provided parent function rangeSumBST
        except we're also passing in the sum
        
        */
        
        // start a sum
        int sum = 0;
        
        // now we create Explorer()
        Explorer(root, L, R, sum);
        // Explorer will be defined below, outside this parent function
        
        // once Explorer finishes the whole tree will ideally be explored
        // so just return sum
        return sum;
        
        
    }
    
    // Explorer is void and doesn't need to return sum or an int
    // because we're already passing in the same sum variable
    // so it's directly changing the one we passed in.
    // IMPORTANT: int& sum works, but int sum does not (gets 0).
    // why? 
    void Explorer(TreeNode* node, int L, int R, int& sum) {
        // 1. if val is in range, add to sum
        if ((node->val <= R) && (node->val >= L)) {
            // make sure to add <= and >=, not just < and >
            sum += node->val; // check values with node->val
        }
        // 2. if there's a left child, call itself on that
        if (node->left) {
            Explorer(node->left, L, R, sum);
        }
        // 3. if there's a right child, call itself on that
        if (node->right) {
            Explorer(node->right, L, R, sum);
        }
        // no return value, because void
    }
    
    /* leetcode result:
Success
Details
Runtime: 156 ms, faster than 33.47% of C++ online submissions for Range Sum of BST.
Memory Usage: 41.1 MB, less than 93.64% of C++ online submissions for Range Sum of BST.
    */
    
    /* Things I learned:
    - how to reconstruct a binary search tree from apparent array / sequence
    - getting the values is pretty much the same as a linked list, with -> arrows
    - making a recursive function is pretty easy. it just calls itself:
      recurse() {
      if ... { break }
      if ... { recurse() }
    - so this was depth first search. if left go left; if left go left; etc
      the base case here is no left child exists, so go right
      so there's essentially two base cases, no left child and no right child
      
    }
    
    */
};
