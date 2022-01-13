//
// Created by GOD b on 2022/1/13.
//
#include "vector"

using namespace std;

class Solution {
public:

    int dominantIndex(vector<int> &nums) {
        if (nums.size() < 2) { return 0; }
        int a=*max_element(nums.begin(), nums.end());
        vector<int>::iterator iterator= find(nums.begin(),nums.end(),a);
        int index=iterator-nums.begin();
        for (int i = 0; i < nums.size(); ++i) {
            if (i != index and nums[i] * 2 >a) {
                return -1;
            }
        }
        return index;
    }
};