/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
Example 3:

Input: intervals = [[4,7],[1,4]]
Output: [[1,7]]
Explanation: Intervals [1,4] and [4,7] are considered overlapping.*/


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;   // FIXED LINE

    for (int i = 0; i < intervals.size(); i++) {
        int start = intervals[i][0];
        int end = intervals[i][1];

        if (ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back({start, end});
        } else {
            ans.back()[1] = max(ans.back()[1], end);
        }
    }

    return ans;
}


/*sort(intervals)

ans = empty

for each interval:
    if ans empty OR current.start > last.end:
        push interval
    else:

    last.end = max(last.end, current.end)
    
*/
