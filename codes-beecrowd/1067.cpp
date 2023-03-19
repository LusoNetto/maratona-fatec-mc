#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = 0;
    cin >> x;
    // estou fazendo um for que anda de 2 em 2, ou seja vai andando 1,3,5,7... assim eu pego somente os impares
    // Ele para no x, ou seja, mostra todas impares até o numero que foi passado
    for(int i = 1; i<=x; i+=2){
        cout << i << endl;
    }
}