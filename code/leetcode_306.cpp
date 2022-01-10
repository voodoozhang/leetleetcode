//
// Created by GOD b on 2022/1/10.
//
#include "string"

using namespace std;

class Solution {
public:
    //大数加法
    string add(string &a, string &b) {
        int n1 = a.size() - 1;
        int n2 = b.size() - 1;
        int carry = 0;
        string ans;
        while (n1 >= 0 || n2 >= 0 || carry > 0) {
            int t1 = n1 >= 0 ? a[n1--] - '0' : 0;
            int t2 = n2 >= 0 ? b[n2--] - '0' : 0;
            ans += (t1 + t2 + carry) % 10 + '0';
            carry = (t1 + t2 + carry) / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    };

    bool isValid(string &num, int i, int j, int k) {
        if (num[i] == '0' && j != i + 1)return false;
        if (num[j] == '0' && k != j + 1)return false;
        string num1 = num.substr(i, j - i);
        string num2 = num.substr(j, k - j);
        string sum = add(num1, num2);
        if (sum.size() + k > num.size()) return false;
        for (int s = k; s <= k - 1 + sum.size(); s++) {
            if (num[s] != num[s - k])return false;
        }
        if (sum.size() + k == num.size())return true;
        return isValid(num, j, k, sum.size() + k);
    };

    bool isAdditiveNumber(string num) {
        int n = num.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isValid(num, 0, i, j))return true;
            }
        }
    }
};

