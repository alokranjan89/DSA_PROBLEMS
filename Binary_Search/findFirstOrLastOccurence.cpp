#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);

        return { first, last };
    }

private:
    int findFirst(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;   // go left
            } else if (nums[mid] < target) {
                low = mid + 1;    // go right
            } else {
                high = mid - 1;   // go left
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;    // go right
            } else if (nums[mid] < target) {
                low = mid + 1;    // go right
            } else {
                high = mid - 1;   // go left
            }
        }
        return ans;
    }
};
