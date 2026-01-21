#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n){
    int largest = -1;
    int slargest = -1;

    for(int i = 0; i <n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}