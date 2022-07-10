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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> applySizes;
    vector<ll> apartSizes;
    for(ll i = 0; i < n; i++) {
        ll size;
        cin >> size;
        applySizes.push_back(size);
    }
    sort(applySizes.begin(), applySizes.end());

    for(ll i = 0; i < m; i++) {
        ll size;
        cin >> size;
        apartSizes.push_back(size);
    }
    sort(apartSizes.begin(), apartSizes.end());

    ll *ptr1 = &applySizes[0];
    ll *ptr2 = &apartSizes[0];
    ll cnt = 0;
    int i = 0;
    int j = 0;

    while(i < n && j < m) {
        if(abs(applySizes[i] - apartSizes[j]) <= k) {
            i++;
            j++;
            cnt++;
        } else {
            if(applySizes[i] - apartSizes[j] > k) {
                j++;
            } else {
                i++;
            }
        }
    }
    cout << cnt;
    return 0;
}