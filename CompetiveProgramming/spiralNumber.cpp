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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll position;
    ll diagonal;
    // y is row and x is column
    ll y, x;
    for(ll i = 0; i < n; i++) {
        cin >> y >> x;
        if(x == 1 && y == 1) {
            position = 1;
            cout << position << "\n";
            continue;
        }
        if(y < x) {
            diagonal = x*x - (x - 1);
            if(x % 2 == 0) {
                position = diagonal - (x - y);
            } else {
                position = diagonal + (x - y);
            }

        } else {
            diagonal = y*y - (y - 1);
            if(y % 2 != 0) {
                position = diagonal - (y - x);
            } else {
                position = diagonal + (y - x);
            }
        }
        cout << position << "\n";
    }
    return 0;
}