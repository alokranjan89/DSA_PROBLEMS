/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;  // position for next non-zero

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}