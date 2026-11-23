/*
217. Contains Duplicate

    Idea: Keep the numbers seen so far in an unordered_set. If the current number
        is already in the set, return true; otherwise insert it. If the loop
        ends, no number repeated, so return false.
    
    Time: O(n)  Space: O(n)
 */

#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> sheet;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sheet.count(nums[i]) == 0)
            {
                sheet.insert(nums[i]);
            }

            else
            {
                return true;
            }
        }
        return false;
    }
};
