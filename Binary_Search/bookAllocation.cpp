#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& nums, int m, int maxPages) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (pages + nums[i] <= maxPages) {
            pages += nums[i];
        } else {
            students++;
            pages = nums[i];
        }
    }
    return students <= m;
}

int findPages(vector<int>& nums, int m) {
    int n = nums.size();
    if (m > n) return -1;

    int low = *max_element(nums.begin(), nums.end());
    int high = 0;
    for (int x : nums) high += x;

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(nums, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

// int main() {
//     vector<int> nums = {12, 34, 67, 90};
//     int m = 2;

//     cout << findPages(nums, m);
//     return 0;
// }
