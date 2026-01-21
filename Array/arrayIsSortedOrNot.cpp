// Problem = Arary is Sorted or not

#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& a, int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) { 
            return false;
        }
    }
    return true;
}
