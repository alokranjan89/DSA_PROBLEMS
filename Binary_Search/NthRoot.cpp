#include <bits/stdc++.h>
using namespace std;

int NthRoot(int N, int M)
{
    int low = 1, high = M;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long val = 1;
        for (int i = 0; i < N; i++)
        {
            val *= mid;
            if (val > M) break;
        }

        if (val == M) return mid;
        else if (val < M) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
