#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: find break point
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: find just larger element and swap
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // Step 3: reverse suffix
    reverse(nums.begin() + i + 1, nums.end());
}

/*
Find break point i
Find just larger element j
Swap i and j
Reverse suffix
Pattern: Greedy
*/