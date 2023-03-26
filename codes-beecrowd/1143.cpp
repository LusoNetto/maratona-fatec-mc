#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int n = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cout << i << " " << pow(i,2) << " " << pow(i,3) << "\n";
    }
}