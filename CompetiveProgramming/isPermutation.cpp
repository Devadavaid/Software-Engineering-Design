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
bool isPermutation(long n) {
    std::vector<long> set1;
    std::vector<long> set2;
    std::vector<long> set;

    for(long i = 1; i <= n ; i++) {
        if(i % 2 == 0) {
            set1.push_back(i);
        } else {
            set2.push_back(i);
        }
    }

    for(auto each : set1) {
        set.push_back(each);
    }

    for(auto each : set2) {
        set.push_back(each);
    }

    for(int i = 0; i < set.size() - 1 ; i++) {
        if(set[i]  - set[i + 1] == 1 || set[i] - set[i + 1] == -1) {
            cout << "NO SOLUTION";
            return false;
        }
    }
    for(auto each : set) {
        cout << each << " ";
    }
    return true;
}


int main() {
    long n;
    cin >> n;
    isPermutation(n);
    return 0;
}