//
// Created by GOD b on 2022/1/19.
//
#include "vector"
#include "unordered_map"
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        unordered_map<int,int>dict;
        for (int i = 0; i <nums.size() ; ++i) {
            int num=nums[i];
            if (dict.count(num) and i-dict[num]<=k){
                return true;
            }
            dict[num]=i;
        }
        return false;
    }
};