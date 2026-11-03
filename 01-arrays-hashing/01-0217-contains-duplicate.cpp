// 217. Contains Duplicate
// https://neetcode.io/problems/duplicate-integer/question?list=neetcode150
// Idea: Walk through nums and keep the numbers seen so far in a hash set.
//       If a number is already in the set, it's a duplicate.
// Time: O(n)  Space: O(n)


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int num : nums){
            
            if(s.count(num) == 0){
                s.insert(num);
            }

            else {
                return true;
            }
        }

        return false;
    }
};