#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        map<long long, int> mp;  // prefixSum -> first index
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }

            long long rem = sum - k;
            if (mp.find(rem) != mp.end()) {
                int len = i - mp[rem];
                maxLen = max(maxLen, len);
            }

            // store prefix sum first occurrence
            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};


/*#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while (right < n) {

        // shrink window if sum is too big
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // check if we got sum == k
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // move right pointer
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}*/