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
    string input;
    cin >> input;
    char *ptr1 = &(input[0]);
    int max = 0;
    int cnt = 0;

    for(ll i = 0; i < input.length(); i++) {
        if(*ptr1 == input[i]) {
            cnt++;
            if(cnt > max) {
                max = cnt;
            }
        } else {
            ptr1 = &(input[i]);
            cnt = 1;
        }

    }
    cout << max;

    return 0;
}



