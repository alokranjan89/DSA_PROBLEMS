/*
 Problem  : Given a sorted array of nums and an integer x, write a program to find the lower bound of x.
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation:
Index 1 is the smallest index such that arr[1] >= x.

*/


#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &nums, int x){
    int n = nums.size();
    int low = 0;
    int high  = n-1;
    int ans = n;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(nums[mid] > x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid + 1;
        }
        return ans;
    }
}
