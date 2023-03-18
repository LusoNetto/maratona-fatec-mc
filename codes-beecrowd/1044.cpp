#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    // verificando se a < b, se for eu troco o valores para a ser o maior
    if(a < b){
        // Esse algoritmo faz a troca de valores de 2 variaveis se preciasar de uma variável auxiliar
        a = a + b;
        b = a - b;
        a = a - b;
    }
    // Verifico se os numeros são multiplos, ou seja, se a divisão do maior pelo menor da resto 0
    if(a%b == 0){
        cout << "Sao Multiplos\n";
    } else {
        cout << "Nao sao Multiplos\n";
    }
}