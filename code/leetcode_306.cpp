//
// Created by GOD b on 2022/1/10.
//
#include "string"

using namespace std;

class Solution {
public:
    string add(string &a, string &b) {
        int n1 = a.size() - 1;
        int n2 = b.size() - 1;
        int carry = 0;
        string ans;
        while (n1 >= 0 || n2 >= 0 || carry > 0){
            int t1=n1>=0?a[n1--]-'0':0;
            int t2=n2>=0?b[n2--]-'0':0;
            ans +=(t1+t2+carry)%10+'0';
            carry=(t1+t2+carry)/10;
        }
    };

    bool isAdditiveNumber(string num) {

    }
};

