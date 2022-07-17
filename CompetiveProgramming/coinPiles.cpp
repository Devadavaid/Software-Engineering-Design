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
    ll pile1, pile2;
    for(ll i = 0; i < n; i++) {
        cin >> pile1 >> pile2;
        ll sum = pile1 + pile2;
        if((pile1 == 0 && pile2 != 0) || (pile1 != 0 && pile2 == 0)) {
            cout << "NO\n";
            continue;
        } else if(pile1 == 0 && pile2 == 0) {
            cout << "YES\n";
            continue;
        }
        if(sum % 3 == 0) {
            if(pile1 < pile2) {
                if(pile2 <= pile1 * 2) {
                    cout << "YES\n";
                    continue;
                } else {
                    cout << "NO\n";
                    continue;
                }
            } else {
                if(pile1 <= pile2 * 2) {
                    cout << "YES\n";
                    continue;
                } else {
                    cout << "NO\n";
                    continue;
                }
            }
        } else {
            cout << "NO\n";
            continue;
        }
    
    }

    return 0;
}