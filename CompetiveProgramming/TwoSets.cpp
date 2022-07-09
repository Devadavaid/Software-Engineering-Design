#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <functional>
#include <algorithm> 
#include <set>
#include<bits/stdc++.h>
#include <math.h>
#include <unordered_set>
typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll sum = (n*(n + 1))/2;
    if(sum % 2 == 1) {
        cout << "NO";
    } else {
        cout << "YES\n";
        set<ll> s1, s2;
        ll target = sum/2;
        int t = n;
        for(int i = 1; i <= n; i++) {
            s1.insert(i);
        }

        while(s1.count(target) == 0) {
            target = target - t;
            s2.insert(t);
            s1.erase(t);
            t--;  
        }
        s1.erase(target);
        s2.insert(target);
        cout << s1.size() << "\n";
        for(auto each : s1) {
            cout << each << " ";
        }
        cout << "\n" << s2.size() << "\n";
        for(auto each : s2) {
            cout << each << " ";
        }
    }
    return 0;
}