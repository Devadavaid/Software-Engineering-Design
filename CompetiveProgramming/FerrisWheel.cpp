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
    
    ll n, maxWeight;
    cin >> n >> maxWeight;
    vector<ll> arr;
    vector<ll> gondolas;
    for(ll i = 0; i < n; i++) {
        ll ele;
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());
    // for(auto each : arr) {
    //     cout << each << " ";
    // }
    ll cnt = 0;
    ll i = 0;

    ll j = n - 1;
    while(true) {
        if(arr[j] + arr[i] <= maxWeight) {
            gondolas.push_back(arr[j] + arr[i]);
            i++;
            j--;
        } else {
            gondolas.push_back(arr[j]);
            j--;
        }
        if(abs(i - j) == 1) {
            if(arr[i] + arr[j] <= maxWeight)
                gondolas.push_back(arr[i] + arr[j]);
            else {
                gondolas.push_back(arr[i]);
                gondolas.push_back(arr[j]);
            }
            break;
        } else if(i == j) {
            gondolas.push_back(arr[j]);
            break;
        }

    }

    // for(auto each : gondolas) {
    //     cout << each << " ";
    // }
    cout << gondolas.size();

    return 0;
}