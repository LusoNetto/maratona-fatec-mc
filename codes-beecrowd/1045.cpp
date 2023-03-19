#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    // Se não formar triagulo eu nem continuo o fluxo
    if((a >= b+c) || (b >= a+c) || (c >= a+b))
        cout << "NAO FORMA TRIANGULO"<<endl;
    // Ou ele é Retângulo ou é obtusângulo ou é acutângulo, não pode ser mais que um ao mesmo tempo, por isso os else's
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
        cout << "TRIANGULO RETANGULO"<<endl;
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
        cout << "TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
        cout << "TRIANGULO ACUTANGULO"<<endl;
    // Até aqui eu testei como são os angulos internos do triangulo
    // Agora vou testar a igualdade dos lados.
    // Ele pode ser equilatero ao mesmo tempo que é isosceles
    if(a == b && a == c)
        cout << "TRIANGULO EQUILATERO"<<endl;
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
        cout << "TRIANGULO ISOSCELES"<<endl;
}