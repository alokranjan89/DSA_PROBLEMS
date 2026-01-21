/*
Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.



The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.


Example 1

Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]

Output: [1, 2, 3, 4, 5, 7]

Explanation:

The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

Logic (Very Simple)

Use two pointers:

i for array a

j for array b

Compare a[i] and b[j]:

Push the smaller one into result

Move that pointer

To avoid duplicates:

Only push if ans.back() != current element

After one array ends:

Push remaining elements of the other array (skip duplicates)

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> unionSortedArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    vector<int> ans;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        } else {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}