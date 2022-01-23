//
// Created by GOD b on 2022/1/14.
//
#include "vector"
#include "iostream"
#include "algorithm"
#include "queue"

using namespace std;
//超时版本
//class Solution {
//public:
//
//    struct cmp {
//        bool operator()(vector<int> &a, vector<int> &b) {
//            return a[0] + a[1] <= b[0] + b[1];
//        }
//    };
//
//    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k) {
//        vector<vector<int>>res;
//
//        if (nums1.size()*nums2.size()<=k){
//            for (int i = 0; i <nums1.size() ; ++i) {
//                for (int j = 0; j <nums2.size() ; ++j) {
//                    res.push_back(vector<int>{nums1[i],nums2[j]});
//                }
//            }
//            return res;
//        } else{
//            priority_queue<vector<int>, vector<vector<int>>, cmp> Q;
//            for (int i = 0; i < nums1.size(); ++i) {
//                for (int j = 0; j <nums2.size() ; ++j) {
//                    if (Q.size()<k){
//                        Q.push(vector<int>{nums1[i],nums2[j]});
//                    } else{
//                        if (nums1[i]+nums2[j]<Q.top()[0]+Q.top()[1]){
//                            Q.pop();
//                            Q.push(vector<int>{nums1[i],nums2[j]});
//
//                        }
//                    }
//                }
//            }
//            for (int i = 0; i <k; ++i) {
//                res.push_back(vector<int>{Q.top()[0],Q.top()[1]});
//                Q.pop();
//
//            }
//            return res;
//        }
//
//
//    }
//};

//class Solution {
//public:
//    bool flag = true;
//    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//        vector<vector<int>> ans;
//        int n = nums1.size(), m = nums2.size();
//        if(n > m) { //始终确保nums1为两数组中长度较少的那个
//            swap(nums1, nums2);
//            swap(m,n);
//            flag = false;
//        }
//        //定义比较规则
//        auto cmp = [&](const auto& a, const auto& b){
//            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
//        };
//        priority_queue< pair<int,int>, vector<pair<int,int>>, decltype(cmp) > q(cmp);
//        for(int i = 0; i < min(n,k); i++){
//            q.push( {i, 0} );
//        }
//        while(ans.size() < k and q.size()){
//            auto [a,b] = q.top();
//            q.pop();
//            flag ? ans.push_back( {nums1[a], nums2[b]}) : ans.push_back( {nums2[b], nums1[a]});
//            if(b + 1 < m) q.push( {a, b + 1} );
//        }
//        return ans;
//    }
//};
