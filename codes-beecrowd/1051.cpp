#include <bits/stdc++.h>
using namespace std;
int main() {
    // Aqui eu fixo a precisao para 2 casas decimais depois da virgula
    cout << fixed;
    cout << setprecision(2);
    // ---------------------------------------------------------------
    double salario, imposto = 0;
    cin >> salario;
    // Minha ideia foi começar de cima para baixo, assim eu pego o excedente de 4500
    if(salario > 4500){
        imposto += (salario - 4500)*0.28;
        salario = 4500;  
    }
    // Aqui eu pego o excedente de 3000.01 até 4500
    if(salario >= 3000.01 && salario <= 4500){
        imposto += (salario - 3000.01)*0.18;
        salario = 3000;
    }
    // Aqui eu pego o excedente de 2000.01 até 3000
    if(salario >= 2000.01 && salario <= 3000){
        imposto += (salario - 2000.01)*0.08;
        salario = 2000;
    }
    // Aqui eu verifico se esta na faixa de 0 até 2000
    // Depois verifico se é isento (ou seja não tem que pagar imposto)
    // Se não for eu mostro quanto de imposto deve ser pago
    if(salario >= 0 && salario <= 2000){
        if(imposto == 0){
            cout << "Isento" << endl;
        } else {
            cout << "R$ " << imposto << endl;
        }
    }
}