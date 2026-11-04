// 1. Two Sum
// https://neetcode.io/problems/two-integer-sum/question?list=neetcode150
// Idea: For each number, need = target - nums[i]. Keep a hash map from each
//       number seen so far to its index. If need is already in the map,
//       return its index and i.
// Time: O(n)  Space: O(n)


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  

        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i];

            if(seen.count(need)){
                return {seen[need], i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};