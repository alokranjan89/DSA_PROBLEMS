#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int largest = arr[0];   // Step 1: assume first is largest

    for (int i = 1; i < arr.size(); i++) {   // Step 2: scan rest
        if (arr[i] > largest) {
            largest = arr[i];             // Step 3: update
        }
    }

    return largest;   // Step 4: final answer
}
