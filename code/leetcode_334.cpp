//
// Created by GOD b on 2022/1/12.
//
#include "vector"
#include "iostream"

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int> &nums) {
        vector<int> mins(nums.size());
        vector<int> maxs(nums.size());
        mins[0] = nums[0];
        maxs[nums.size() - 1] = nums[nums.size() - 1];
        int i = 1;
        while (i < nums.size() - 1) {
            if (nums[i] >= mins[i - 1]) {
                mins[i] = mins[i - 1];
            } else {
                mins[i] = nums[i];
            }
            if (nums[nums.size() - i - 1] <= maxs[nums.size() - i]) {
                maxs[nums.size() - i - 1] = maxs[nums.size() - i];
            } else{
                maxs[nums.size() - i - 1]=nums[nums.size() - i - 1];
            }
            i++;
        }
        for (int j = 1; j <nums.size()-1 ; ++j) {
            if (mins[j]<nums[j] and nums[j]<maxs[j]){
                return true;
            }

        }
        return false;
    }
};