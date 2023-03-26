#include <bits/stdc++.h>
using namespace std;
int main () {
    int x = 0, y = 0;
    cin >> x >> y;
    // Sempre vou deixar o x com o menor valor
    // Se o x for maior que y eu troco os valores
    // Esse é um método de trocar os valores sem usar uma variavel auxiliar 
    if(x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    // Aqui eu vou achar o primeiro valor que deixa resto dois
    int restaDois = x;
    while(!(restaDois%5 == 2)){
        restaDois++;
    }
    // Se eu somar um número no primeiro número que resta dois eu tenho o primeiro número que resta 3
    int restaTres = restaDois+1;
    // Aqui eu vou printar os numeros que restam 2 e 3
    // Sempre verifico se o resta dois esta dentro do meu intervalo verificando se ele não é maior que y
    while(restaDois < y){
        // Faço esse teste porque se o primeiro numero que tem resto 2 for igual ao x eu não posso mostra-lo
        if(restaDois != x){
            cout << restaDois << "\n";
        }
        // Somo +5 meu numero atual que resta dois e tenho o próximo número que resta dois
        restaDois+=5;
        // Verifico se o numero que resta tres esta dentro do intervalor, porque o resta dois pode estar e o resta
        // tres pode ter passado
        if(restaTres < y){
            cout << restaTres << "\n";
            // Somo +5 meu numero atual que resta tres e tenho o próximo número que resta tres
            restaTres+=5;
        }
    }
    
}