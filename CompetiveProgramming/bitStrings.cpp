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
#include <map>
typedef long long ll;
using namespace std;

ll bitStrings(ll n, ll result) {
    result = result * 2;
    if(n == 1) {
        return result;
    } else {
        return bitStrings(n=n-1, result);    
    }
}

const int mod = (int)(1e9 +7);
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll result = 1; 
    for(int i = 0; i < n;i++) {
        result = result * 2;
        result = result % mod;
    }
    cout << result;

    return 0;
}