// 271. Encode and Decode Strings
// https://neetcode.io/problems/string-encode-and-decode/question?list=neetcode150
// Idea: Encode each word as its length, a '.', then the word ("hi" -> "2.hi").
//       To decode, read the number up to the next '.', then take exactly that
//       many characters. A word may contain '.', but the length says where it ends.
// Time: O(n)  Space: O(n)


#include <string>
#include <vector>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (int i = 0; i < strs.size(); i++) {
            int length = strs[i].size();
            encoded_string += to_string(length);
            encoded_string += '.';
            encoded_string += strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;                                      

        while (i < s.size()) {
            int dot = s.find('.', i);                    
            int length = stoi(s.substr(i, dot - i));     
            string word = s.substr(dot + 1, length);     
            result.push_back(word);
            i = dot + 1 + length;                        
        }

        return result;
    }
};