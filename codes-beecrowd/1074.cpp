#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0, valor = 0;
	cin >> n;
	for(int i = 0; i< n ; i++){
	    cin >> valor;
        // Verifico primeiro se não é negativo
        // Se eu não fizer isso primeiro eu vou printar que zero é par (EVEN) e null (NULL)
        // e o problema pediu para não deixar isso acontecer
	    if(valor == 0){
	        cout << "NULL" << endl;
	    } else if(valor%2 == 0){
	        cout << "EVEN ";
	        if(valor > 0){
	            cout << "POSITIVE" << endl;
	        } else {
	            cout << "NEGATIVE" << endl;
	        }
	    } else {
	        cout << "ODD ";
	        if(valor > 0){
	            cout << "POSITIVE" << endl;
	        } else {
	            cout << "NEGATIVE" << endl;
	        }
	    }
	}
}