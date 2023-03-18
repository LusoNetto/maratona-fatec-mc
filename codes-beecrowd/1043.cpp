#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c,perimetro,area;
    //Deixando fixo 1 casa decimal para todas a saidas que tiverem a partir daqui
    cout << fixed;
    cout << setprecision(1);
    cin >> a >> b >> c;
    // Verificando a existência do triângulo
    // todo triangulo deve ter a soma de dois lados maior que a do lado que sobrou
    if(a + b > c && a + c > b && b + c > a){
        perimetro = a+b+c;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        // calculando a area do trapézio
        // (base maior + base menor) * altura / 2
        area = (a+b)*c/2;
        cout << "Area = " << area << endl;
    }
}