/*🧠 How to Solve:

Keep a candidate and its count (votes).

If count == 0 → pick current number as new candidate.

If current number == candidate → count++.

Else → count-- (cancel a vote).

At the end, the surviving candidate is the majority element.

📝 Very Short Revision Note

Use candidate + count

Count = 0 → choose new candidate

Same number → +1, different → -1

Final candidate = majority element

Pattern: Boyer–Moore Voting

Time: O(n) | Space: O(1)

*/


#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0)
            candidate = num;

        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}
