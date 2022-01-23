//
// Created by GOD b on 2022/1/22.
//
#include "string"

using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - i])
                return 2;
        }
        return 1;
    }
};