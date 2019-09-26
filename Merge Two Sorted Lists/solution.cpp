// C++ solution for leetcode problem Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/
// Leeson Chen September 25 2019

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        ListNode* start = new ListNode(-1);
        ListNode* l3 = start; 
        // l3 really only refers to the current node in the l3 linked list
        // this start pointer stays at the start of l3. returning it returns the whole list
        // keep in mind: this means l3 starts with -1. 
        // to return correctly, get rid of it, or increment to the start+1 
        // in other words, return start->next
        
        // in case one list is empty, return the other. 
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        // for l1 element: if l2 element is equal or less, insert immediately before
        while ((l1)&&(l2)) {
            if (l1->val > l2->val) {
                l3->next = l2; // insert l2 node into l3
                l2 = l2->next; // increment l2
            } else if (l1->val <= l2->val) {
                l3->next = l1; // insert l1 node into l3
                l1 = l1->next; // increment l1
            }
            
            // increment l3
            l3 = l3->next;
            
        }
        
        // if we reach the end of one list, add the rest of the other list to l3
        if (!l1) {
            l3->next = l2;
        }
        else if (!l2) {
            l3->next = l1;
        }
        
        start = start->next; // start is still pointing to -1
        return start;
    }
};
