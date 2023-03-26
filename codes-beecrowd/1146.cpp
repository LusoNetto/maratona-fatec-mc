#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int numero;
    cin >> numero;
    while(numero != 0){
        for(int i = 1; i<=numero; i++){
            if(i == numero){
                cout << i << "\n";    
            } else {
                cout << i << " ";   
            }
        }
        cin >> numero;
    }
}