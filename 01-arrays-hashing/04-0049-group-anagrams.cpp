// 49. Group Anagrams
// https://neetcode.io/problems/anagram-groups/question?list=neetcode150
// Idea: Anagrams have the same letters, so sorting a word gives the same key
//       for all of them ("eat", "tea" -> "aet"). Group words in a hash map
//       from sorted key to word list, then return the lists.
// Time: O(n · k log k)  Space: O(n · k)


#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;   
        
        for (const string& word : strs) {
            string key = word;                 
            sort(key.begin(), key.end());      
            groups[key].push_back(word);      
        }
        
        vector<vector<string>> result;
        
        for (auto& p : groups) {
            result.push_back(p.second);        
        }
        return result;

    }
};