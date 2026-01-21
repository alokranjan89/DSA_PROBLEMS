
/* 
189. Rotate Array

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


Steps:

k = k % n

Reverse whole array

Reverse first k elements

Reverse remaining n-k elements

*/ 


#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&nums,int start,int end){
    while(start < end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n  = nums.size();

        k = k % n;

        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);   
        
        }

