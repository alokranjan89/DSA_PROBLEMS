#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 0) return {};

        int m = mat[0].size();
        vector<int> ans;

        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;

        while (top <= bottom && left <= right) {

            // 1. Traverse top row
            for (int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            // 2. Traverse right column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // 3. Traverse bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // 4. Traverse left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};