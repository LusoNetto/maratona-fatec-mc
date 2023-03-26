#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int x = 0, y = 0;
    cin >> x >> y;
    for(int i = 1; i<=y; i++){
        if(i%x == 0){
            cout << i << "\n";
        }else {
            cout << i << " ";
        }
    }
}