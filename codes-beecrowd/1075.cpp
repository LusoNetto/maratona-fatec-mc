#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    // o primeiro numero que da resto dois é o próprio 2
    for(int i = 2; i <= 10000; i+=n){
        cout << i << endl;
    }
}