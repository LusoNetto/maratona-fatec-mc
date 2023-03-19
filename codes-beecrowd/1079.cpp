#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    double a = 0, b = 0, c = 0;
    // Fixando a precisao em 1 casa decimal
    cout << fixed;
    cout << setprecision(1);
    // ------------------------------------
    for(int i = 0; i < n; i ++){
        cin >> a;
        cin >> b;
        cin >> c;
        a *= 2;
        b *= 3;
        c *= 5;
        cout << (a + b + c)/10 << endl;
    }
}