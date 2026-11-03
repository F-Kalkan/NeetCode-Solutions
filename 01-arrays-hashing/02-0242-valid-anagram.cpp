// 242. Valid Anagram
// https://neetcode.io/problems/is-anagram/question?list=neetcode150
// Idea: Count letters in a 26-box array: +1 for each letter of s, -1 for each letter of t.
//       If every box ends at 0, both strings have the same letters.
// Time: O(n)  Space: O(1)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alphabet(26, 0);
        
        if (s.size() != t.size()){
            return false;
        }

        for (char x : s){
            int box = x - 'a';
            alphabet[box]++;
        }

        for (char x : t){
            int box = x - 'a';
            alphabet[box]--;
        }

        for (int count : alphabet){
            if (count != 0) return false;
        }

        return true;
    }
};