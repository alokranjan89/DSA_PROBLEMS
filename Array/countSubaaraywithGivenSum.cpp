#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix;
        prefix[0] = 1;   // base case

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (prefix.find(sum - k) != prefix.end()) {
                count += prefix[sum - k];
            }

            prefix[sum]++;
        }

        return count;
    }
};

/*📝 Very Short Note (How to Solve)

1️⃣ Use a prefix sum to store cumulative sum.
2️⃣ Use a hash map to store how many times each prefix sum occurs.
3️⃣ If (currentSum - k) exists in the map → a valid subarray is found.
4️⃣ Add its frequency to the answer and update the map.

*/