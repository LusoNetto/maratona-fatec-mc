#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;
    int cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    double quantidade = 0;
    string tipo = "";
    cin >> n;
    // Fixando a precisao em 2 casas decimais
    cout << fixed;
    cout << setprecision(2);
    // --------------------------------------
    for (int i = 0; i< n; i++){
         cin >> quantidade >> tipo;
         if(tipo == "C"){
             coelhos += quantidade;
             cobaias += quantidade;
             quantidade = 0;
         } else if(tipo == "R") {
             ratos += quantidade;
             cobaias += quantidade;
             quantidade = 0;
         } else if(tipo == "S") {
             sapos += quantidade;
             cobaias += quantidade;
             quantidade = 0;
         }
    }
    // Como terei de mostra as casas decimais, eu criei variáveis extras com ponto flutuante para fazer as contas de %
    double c = 0, r = 0, s = 0;
    c = coelhos;
    r = ratos;
    s = sapos;
    cout << "Total: " <<  cobaias  << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << c/cobaias*100 << " %" << endl;
    cout << "Percentual de ratos: " << r/cobaias*100 << " %" << endl;
    cout << "Percentual de sapos: " << s/cobaias*100 << " %" << endl;
}