/*
347. Top K Frequent Elements

    Idea: Count each number in an unordered_map. Copy the counts into a vector
        of (count, number) pairs and sort it from the largest count down. The
        first k pairs hold the answer, so push their numbers into result.

    Time: O(n * log n)  Space: O(n)
*/

#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> freq;
        for (int x : nums)
        {
            freq[x]++;
        }

        vector<pair<int, int>> v;
        for (auto &p : freq)
        {
            v.push_back({p.second, p.first});
        }

        sort(v.rbegin(), v.rend());
        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(v[i].second);
        }
        return result;
    }
};
