#include <iostream>
#include <vector>
#include <string>
using namespace std;



vector<int> ZeroEvenOdd(int num) {
    vector<int> result;

    for(int i = 0; i < num; i++) {
        result.push_back(0);
        result.push_back(i + 1);  
    }
    return result;
}
int main() {
    int num = 10;
    vector<int> output = ZeroEvenOdd(num);
    for(auto each : output) {
        cout << each;
    }

    return 0;
}