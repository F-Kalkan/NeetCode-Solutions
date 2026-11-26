/*
49. Group Anagrams

    Idea: Anagrams have the same letters, so sorting their letters gives the
        same key. For each word, sort a copy to make the key and push the
        word into groups[key]. At the end, copy every group from the map
        into result.

    Time: O(n * k log k)  Space: O(n * k)
*/

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> groups;
        for (string word : strs)
        {
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto &p : groups)
        {
            result.push_back(p.second);
        }
        return result;
    }
};