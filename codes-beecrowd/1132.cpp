#include <bits/stdc++.h>
using namespace std;
int main() {
    // somaTotal é o somatório de x até y incluindo os multiplos
    // totalMultiplos é o somatório dos multiplos
    int x = 0, y = 0, somaTotal = 0, totalMultiplos = 0;
    cin >> x >> y;
    // Para deixar o problema sem erro sempre deixo no x o menor valor
    // Essa é uma forma de trocar dois valores sem usar uma variável auxiliar
    if(x>y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    // Aqui ultilizo uma fórmula para calcular o somatório de x até y
    somaTotal = (y-x+1)*(x+y)/2;
    bool achouTodos = false;
    int i = 1;
    int numero = 0;
    // Aqui eu acho todos os multiplos de 13 de x até y
    while(!achouTodos){
        numero = i*13;
        if(numero >= x && numero <= y){
            totalMultiplos += numero;
        } else {
            if(numero > y){
                achouTodos = true;
            }
        }
        i++;
    }
    // Aqui eu tiro do somatorio total de x até y os multiplos de 13 de x até y
    cout << somaTotal - totalMultiplos << "\n";
}