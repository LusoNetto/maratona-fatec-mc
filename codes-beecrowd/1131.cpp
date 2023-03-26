#include <bits/stdc++.h>
using namespace std;
int main () {
    int inter = 0, gremio = 0;
    // tInter e tGremio é o total de gols do inter e o total de gols do Gremio
    int tInter = 0, tGremio = 0;
    int empates = 0;
    int opcao = 1;
    int grenais = 0;
    while(opcao == 1){
        grenais += 1;
        cin >> inter >> gremio;
        if(inter == gremio){
            empates += 1;
        } else if(inter > gremio){
            tInter += 1;
        } else {
            tGremio += 1;
        }
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> opcao;
    }
    cout << grenais << " grenais\n";
    cout << "Inter:" << tInter << "\n";
    cout << "Gremio:" << tGremio << "\n";
    cout << "Empates:" << empates << "\n";
    if(tInter > tGremio){
        cout << "Inter venceu mais\n";
    } else {
        cout << "Gremio venceu mais\n";
    }
}