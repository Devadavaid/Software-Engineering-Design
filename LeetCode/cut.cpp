#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <functional>
#include <algorithm> 
#include <set>
#include<bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

class Solution {
public:
    //cust = [3, 5, 1, 4];
    int minCost(int n, vector<int>& cuts) {
        vector<int> cost;
        vector<int> sticks;
        vector<int> result;
        int a = 0;
        int b = 0;
        cost.push_back(n); // 7
        for(int i = 0; i < cuts.size(); i++) {
            if(cuts[i] <= cost[i]) {
                cost.push_back(n - cuts[i]); // 4 
                sticks.push_back();
            } else {

                cost.push_back(cost[i] - cuts[i]); // 4 - 5 = -1.
            }

        }
        for(auto each : cost) {
            cout << each << ", ";
        }
        cout << "\n Total = ";

        int totalCost = 0;
        for(auto each : cost) {
            totalCost = totalCost + each;
        }
        return totalCost;
    }
};


int main() {
    Solution Sol;
    int n = 7;
    vector<int> cuts = {3, 5, 1, 4};
    // vector<int> cost = Sol.minCost(n, cuts);
    // for(auto each: cost) {
    //     cout << each << ", ";
    // }
    cout << Sol.minCost(n, cuts);
    return 0;
}