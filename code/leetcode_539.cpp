//
// Created by GOD b on 2022/1/18.
//
#include "string"
#include "algorithm"
#include "vector"
#include "iostream"

using namespace std;
static bool flag = false;

class Solution {
public:
    static bool company(string &a, string &b) {
        if (a[0] == b[0]) {
            if (a[1] == b[1]) {
                if (a[3] == b[3]) {
                    if (a[4] == b[4]) {
                        flag = true;
                    } else {
                        return a[4] > b[4];
                    }
                } else {
                    return a[3] > b[3];
                }
            } else {
                return a[1] > b[1];
            }
        } else {
            return a[0] > b[0];
        }
    }

    int findMinDifference(vector<string> &timePoints) {
        sort(timePoints.begin(), timePoints.end(), company);
        if (flag) {
            return 0;
        }
        int min_num = 24*60- (stoi(timePoints[0].substr(0,2))
                - stoi(timePoints[timePoints.size()-1].substr(0,2)))*60
                        -(stoi(timePoints[0].substr(3,2))
                          - stoi(timePoints[timePoints.size()-1].substr(3,2)));
        for (int i = 0; i < timePoints.size()-1 ; ++i) {
           int j= (stoi(timePoints[i].substr(0,2))
             - stoi(timePoints[i+1].substr(0,2)))*60
            +(stoi(timePoints[i].substr(3,2))
              - stoi(timePoints[i+1].substr(3,2)));
            if (min_num<j){
                min_num=j;
            }
        }
        return min_num;
    }
};