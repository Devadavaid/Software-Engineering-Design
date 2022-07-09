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

    int cnt;
    for(ll i = 5; n/i >= 1; i*=5) {
        cnt += n/i;
    } 

    cout << cnt;

}