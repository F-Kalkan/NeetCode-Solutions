/*
1. Two Sum

    Idea: Walk through nums once. For each number, compute need = target - nums[i]
        and look it up in the map. If need is already there, return its index
        and i. Otherwise store the current number with its index. Checking
        before storing keeps a number from pairing with itself.

    Time: O(n)  Space: O(n)
*/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> list;
        for (int i = 0; i < nums.size(); i++)
        {
            int need = target - nums[i];
            if (list.count(need))
            {
                return {list[need], i};
            }
            list[nums[i]] = i;
        }
        return {};
    }
};
