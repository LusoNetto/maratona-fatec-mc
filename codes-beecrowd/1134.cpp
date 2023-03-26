#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int opcao = 0;
    int a = 0,g = 0,d = 0;
    while(opcao != 4){
        switch(opcao){
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
        }
        cin >> opcao;
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << a << "\n";
    cout << "Gasolina: " << g << "\n";
    cout << "Diesel: " << d << "\n";
}