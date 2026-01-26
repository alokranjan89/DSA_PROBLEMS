#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(const vector<int>& arr, int target) {
        int first = findFirst(arr, target);
        if (first == -1) return 0;   // target not found

        int last = findLast(arr, target);
        return last - first + 1;
    }

private:
    int findFirst(const vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                high = mid - 1;   // move left
            } else if (arr[mid] < target) {
                low = mid + 1;    // move right
            } else {
                high = mid - 1;   // move left
            }
        }
        return ans;
    }

    int findLast(const vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                low = mid + 1;    // move right
            } else if (arr[mid] < target) {
                low = mid + 1;    // move right
            } else {
                high = mid - 1;   // move left
            }
        }
        return ans;
    }
};
