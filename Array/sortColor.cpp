#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { 
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}


/*Rules:

If nums[mid] == 0 → swap with low, low++, mid++

If nums[mid] == 1 → mid++

If nums[mid] == 2 → swap with high, high-- (don’t move mid)

*/