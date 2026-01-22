/*Approach 2: Hash Set Method
🔹 Intuition Recap
Store all numbers in a set.
For each number, start a sequence only if num-1 does not exist.

Extend forward (num+1, num+2, ...).
Track the maximum length.*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>&nums){
     if(nums.empty()) return 0;

     unordered_set<int>st(nums.begin(),nums.end());
     int longest = 0;

     for(int num : st){
        if(st.find(num-1) == st.end()){
            int current = num;
            int length = 1;

            while(st.find(current+1) != st.end()){
                current++;
                length++;
            }
            longest = max(longest,length);
        }
     }
     return longest;
} 