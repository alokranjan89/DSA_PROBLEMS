#include<bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
        int high  = nums[0];
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > high){
                high = nums[i];
            }
        }

        int low = 1;
        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long sum =  0;
            for(int x  : nums){
                sum += (x + mid-1) / mid;
            }

            if(sum <= threshold){
                ans = mid;
                high  = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }