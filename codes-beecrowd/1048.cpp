#include <bits/stdc++.h>
using namespace std;
int main() {
    double salario, novoSalario, reajuste = 0;
    // Eu estou fixando a precisão para 2 casas decimais
    cout << fixed;
    cout << setprecision(2);
    // -------------------------------------------------
    cin >> salario;
    if(salario >= 0 && salario <= 400){
        reajuste = salario * 0.15;
        novoSalario = salario + reajuste;
        cout << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if(salario >= 400.01 && salario <= 800){
        reajuste = salario * 0.12;
        novoSalario = salario + reajuste;
        cout << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    } else if(salario >= 800.01 && salario <= 1200){
        reajuste = salario * 0.10;
        novoSalario = salario + reajuste;
        cout << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    } else if(salario >= 1200.01 && salario <= 2000){
        reajuste = salario * 0.07;
        novoSalario = salario + reajuste;
        cout << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    } else if(salario > 2000){
        reajuste = salario * 0.04;
        novoSalario = salario + reajuste;
        cout << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }
        
}