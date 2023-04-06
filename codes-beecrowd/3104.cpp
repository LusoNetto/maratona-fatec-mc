#include <bits/stdc++.h>
using namespace std;
// Aqui eu defino uma abreviação para long long (variável com 64 bits) que pode guardar numeros muito grandes.
// Um int normal por exemplo tem somente 16 bits para guardar valores.
typedef long long ll;
// Defino uma função que me retorna o valor de uma posição na string
int getDigit(char a){
    return (int)(a - '0');
}
int main() {
    // Declaro a como string para eu poder percorrer ela
    string a;
    int b;
    // Recebo 'a' e 'b';
    cin >> a >> b;
    // Declaro uma variável (que será minha resposta) usando a abreviação,
    // ou seja, ela terá 64 bits para guardar valores.
    ll ans = 0;
    // Aqui eu percorro cada posição somando na resposta o módulo
    for(int i = 0; i < a.size(); ++i) ans = (ans * 10 + getDigit(a[i])) % b;
    cout << ans << '\n';
}