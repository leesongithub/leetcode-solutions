// C++ solution to leetcode problem How Many Numbers Are Smaller Than the Current Number
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Leeson Chen March 14 2020

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        /*
        So the naive solution is O(n^2): for each integer in the list, 
        iterate through the list again and count the number of integers smaller than it.
        
        Smarter way: sort the list, then return the SortedList index of each nums item
        
        Alright, so that won't work. Because of duplicates. 
        If the same number appears twice, one will have a higher index.
        
        Also, an ordered map doesn't work. Because even though duplicates have the same count, 
        any number higher than the duplicate needs to be incremented. 
        
        You can't just "count the number of duplicates and add it to the index" either.
        Because only the numbers occurring AFTER the duplicates are incremented.
        
        ... Should I just do the naive solution???
        */
        
        /*
        std::vector<int> SortedList = nums;
        std::sort(SortedList.begin(), SortedList.end()); // I couldn't create SortedList and set it to nums.sort in the same line
        std::map<int, int> OrderedMap;
        std::map<int, int>::iterator it; // <-- you need this iterator to use the .find() function apparently
        std::vector<int> results;
        
        for (int i=0; i<SortedList.size();i++)
        {
            OrderedMap.insert(pair<int, int>(SortedList[i],OrderedMap.size()));
        }
        
        for (int i=0; i<nums.size();i++) 
        {
            it = OrderedMap.find(nums[i]);
            int index = std::distance(OrderedMap.begin(), it);
            results.push_back(index);
            //OrderedMap.erase(it); <-- this line caused a runtime error?
        }
        
        // The Printing Press was invented in 1440 
        // and reinvented on March 14 2020 when I decided to print the contents of every fucking vector I have.
        cout << "nums: ";
        for (int i=0; i<nums.size();i++) { cout << nums[i] << ","; }
        cout << "\nSorted List: ";
        for (int i=0; i<SortedList.size();i++) { cout << SortedList[i] << ","; }
        cout << "\nresults: ";
        for (int i=0; i<results.size();i++) { cout << results[i] << ","; }
        cout << "\nOrdered Map:\n";
        for (auto i = OrderedMap.begin(); i != OrderedMap.end(); i++) { 
            std::cout << i->first << " : " << i->second << '\n'; 
        }

        return results;
        */
        
        // The Naive Approach (that works)
        std::vector<int> results;
        
        for (int i=0; i<nums.size();i++)
        {
            int current = nums[i];
            int smallerNums = 0;
            for (int j=0; j<nums.size();j++)
            {
                if (nums[j] < current)
                {
                    smallerNums++;
                }
            }
            results.push_back(smallerNums);
        }
        return results;
        /* leetcode results:
        Success
        Details
        Runtime: 28 ms, faster than 42.53% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
        Memory Usage: 8.2 MB, less than 100.00% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
        
        well at least I learned how to use ordered maps in c++
        */
        
    }
    
};