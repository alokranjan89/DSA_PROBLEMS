#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = n;

        // Lower bound search
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        int floor = -1;
        int ceil = -1;

        // Find ceil
        if (ans < n) {
            ceil = nums[ans];
        }

        // Find floor
        if (ans < n && nums[ans] == x) {
            floor = nums[ans];
        } else if (ans > 0) {
            floor = nums[ans - 1];
        }

        return { floor, ceil };
    }
};
