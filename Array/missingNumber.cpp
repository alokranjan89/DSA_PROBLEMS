/*
Logic (Simple)

XOR all numbers from 1 to n → store in xor1

XOR all elements of the array → store in xor2

XOR both results:

missing = xor1 ^ xor2

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int xor1 = 0; // XOR of 1..n
    int xor2 = 0; // XOR of array elements
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        xor2 ^= nums[i];     // XOR array elements
        xor1 ^= (i + 1);    // XOR numbers from 1 to n
    }

    return xor1 ^ xor2;     // missing number
}