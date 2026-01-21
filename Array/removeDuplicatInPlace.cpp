// problem  : REmove Duplicate In palace

#include<bits/stdc++.h>
using namespace std;


int removeDuplicate(vector<int> &arr, int n) {
    if (n == 0) return 0;

    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}