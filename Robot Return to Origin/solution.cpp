// C++ solution to leetcode problem Robot Return to Origin
// https://leetcode.com/problems/robot-return-to-origin/
// Leeson Chen March 18 2020

class Solution {
public:
    bool judgeCircle(string moves) {
        /* Plan:
        create two stacks, one for left-right movements and another for up-down movements
        each stack will push the character if empty, pop if it's the opposite direction, and push if it's the same direction as top
        at the end if both stacks are empty return true, false if otherwise
        
        
        stack<char> LR;
        stack<char> UD;
        char current;
        
        for (int i=0; i<moves.length(); i++)
        {
            current = moves[i];
            cout << current<<"\n";
            if (current == 'U')
            {
                if (UD.empty())
                    UD.push(current);
                else if (UD.top() == 'D')
                    UD.pop();
                else 
                    UD.push(current);
            }
            else if (current == 'D')
            {
                if (UD.empty())
                    UD.push(current);
                else if (UD.top() == 'U')
                    UD.pop();
                else
                    UD.push(current);
            }
            else if (current == 'L')
            {
                if (LR.empty())
                    LR.push(current);
                else if (LR.top() == 'R')
                    LR.pop();
                else
                    LR.push(current);
            }
            else if (current == 'R')
            {
                if (LR.empty())
                    LR.push(current);
                else if (LR.top() == 'L')
                    LR.pop();
                else 
                    LR.push(current);
            }
        }
        
        if (UD.empty() && LR.empty())
            return true;
        else 
            return false;
            
        leetcode result: 
        Success
        Details
        Runtime: 100 ms, faster than 8.07% of C++ online submissions for Robot Return to Origin.
        Memory Usage: 9.6 MB, less than 100.00% of C++ online submissions for Robot Return to Origin.
        fuck that's slow
        */
        
        /*
        That was too slow, we can do it again with integers instead of stacks. 
        Also not setting a current char might save a little time/space.
        */
        int LR = 0, UD = 0;
        
        for (int i=0; i<moves.length(); i++)
        {
            if (moves[i] == 'L')
                LR--;
            else if (moves[i] == 'R')
                LR++;
            else if (moves[i] == 'U')
                UD++;
            else if (moves[i] == 'D')
                UD--;
        }
        if (LR == 0 && UD == 0)
            return true;
        else 
            return false;
    }
    /* leetcode result:
    Success
    Details
    Runtime: 12 ms, faster than 96.49% of C++ online submissions for Robot Return to Origin.
    Memory Usage: 9.6 MB, less than 100.00% of C++ online submissions for Robot Return to Origin.
    
    It looks like calling a comparison to stack.top() while the stack is empty returns a seg fault. 
    Integers are a whole lot faster than stacks. 16ms vs 100ms for the same algorithm.
    */
};