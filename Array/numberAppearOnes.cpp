/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Logic (Simple)
Initialize xorSum = 0
XOR all elements of the array
Return xorSum
🎯 Why This Works
x ^ x = 0
x ^ 0 = x
All pairs cancel out
Only the single number remains
*/


#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int xorSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        xorSum ^= nums[i];
    }

    return xorSum;
}