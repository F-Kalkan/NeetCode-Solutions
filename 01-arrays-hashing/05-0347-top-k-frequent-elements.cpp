// 347. Top K Frequent Elements
// https://neetcode.io/problems/top-k-elements-in-list/question?list=neetcode150
// Idea: Count each number in a hash map. Put (count, number) pairs in a vector,
//       sort them from highest count to lowest, and take the first k numbers.
// Time: O(n log n)  Space: O(n)


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        vector<pair<int, int>> v;
        for (auto& p : freq) {
            v.push_back({ p.second, p.first });
        }
      
        sort(v.rbegin(), v.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].second);
        }
        return result;
    }
};