#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int a = 0, n = 0, soma = 0;
    cin >> a;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            soma += a+i;
        }
    }
    cout << soma << endl;
}