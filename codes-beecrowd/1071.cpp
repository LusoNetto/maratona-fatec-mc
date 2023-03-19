#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, soma = 0;
    cin >> x >> y;
    // verifico se o y é par se for eu adiciono 1 nele para ele começar com numeros impares
    if(y%2==0){
        y++;
    }else {
        // Se nao for par eu somo 2 nele para ele não somar o primeiro impar
        y += 2;
    }
    // Aqui eu faco a soma de dois em dois para pegar somente os impares
    // Eu vou de y ate x
    for(int i = y; i < x; i+=2){
        soma += i;
    }
    cout << soma << endl;
}