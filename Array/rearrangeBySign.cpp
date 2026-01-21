#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);

    int posIndex = 0;  // even indices
    int negIndex = 1;  // odd indices

    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            ans[negIndex] = nums[i];
            negIndex += 2;
        } else {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }

    return ans;

    /*
    Use new array ans

posIndex = 0 → even slots

negIndex = 1 → odd slots

Positive → even index

Negative → odd index

Pattern: Two pointers

Time: O(n) | Space: O(n)
    */
