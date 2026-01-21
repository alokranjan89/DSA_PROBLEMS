#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = INT_MAX;   // minimum price so far
    int profit = 0;      // maximum profit so far

    for (int price : prices) {
        mini = min(mini, price);               // update cheapest buy price
        profit = max(profit, price - mini);   // update best profit
    }

    return profit;
}