/*
242. Valid Anagram

    Idea: Count the letters in a vector of 26 boxes. Each letter of s adds 1
        to its box and each letter of t subtracts 1. If the lengths are
        different, return false right away. At the end every box must be 0,
        otherwise return false.

    Time: O(n)  Space: O(1)
*/

#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        vector<int> alphabet(26, 0);

        if (s.size() != t.size())
        {
            return false;
        }

        for (char x : s)
        {
            int box = x - 'a';
            alphabet[box]++;
        }

        for (char x : t)
        {
            int box = x - 'a';
            alphabet[box]--;
        }

        for (int count : alphabet)
        {
            if (count != 0)
            {
                return false;
            }
        }

        return true;
    }
};