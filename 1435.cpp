#include <bits/stdc++.h>
using namespace std;
int main() {
    while(true){
        int n = 0;
        int contador = 0;
        int percorridos = 0;
        int vezes = 0;
        cin >> n;
        int ordem = n;
        int numero = 1;
        while(percorridos < n*n){
            if(n%2 == 0){
                cout << numero << " ";
                percorridos++;
                contador++;
                vezes++;
                if(contador == (ordem*4)-4){
                    numero++;
                    contador = 0;
                    ordem-=2;
                    cout << "\n";
                }
            } else {
                cout << numero << " ";
                percorridos++;
                contador++;
                vezes++;
                if((contador == (ordem*4)-4) || percorridos == n*n-1){
                    numero++;
                    contador = 0;
                    ordem-=2;
                    cout << "\n";
                }
            }
        }
    }
}
