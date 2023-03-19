#include <bits/stdc++.h>
using namespace std;
int main() {
    int inicio, fim, horas = 0;
    cin >> inicio >> fim;
    // Verifico se aconteceu no mesmo dia
    if(inicio < fim){
        horas = fim - inicio;
    } else {
        // se não aconteceu no mesmo dia faço esse cálculo
        horas = fim + 24 - inicio;
    }
    cout << "O JOGO DUROU " << horas <<" HORA(S)" << endl;
}