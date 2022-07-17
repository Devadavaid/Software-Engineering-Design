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
    ll arr[n];
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll i = 0;
    ll maximum = arr[0];
    ll max = 0;
    ll sum = 0;

    for(int i = 0; i < n; i++) {
        sum = max + arr[i];
        if(sum > arr[i]) {
            max = sum;
            if(max > maximum) {
                maximum = max;
            }
        } else {
            max = arr[i];
            if(max > maximum) {
                maximum = max;
            }
        }
    }
    cout << maximum << " ";
    return 0;
}