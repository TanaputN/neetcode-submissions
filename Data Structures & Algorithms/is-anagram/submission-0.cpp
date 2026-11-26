#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Jämför längden på orden
        if (s.length() != t.length()) {
            return false;
        }

        // 2. Skapa två hastabeller
        std::unordered_map<char, int> countS;
        std::unordered_map<char, int> countT;

        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};
