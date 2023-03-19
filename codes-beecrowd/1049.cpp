#include <bits/stdc++.h>
using namespace std;
int main() {
    string palavra1, palavra2, palavra3 = "";
    cin >> palavra1 >> palavra2 >> palavra3;
    //Eu testei a partir a palavra 3, algumas eu precisei verificar a palavra 2, nenhuma foi necessária testar as 3 palavras
    // Testando se é carnivoro - só pode ser aguia
    if(palavra3 == "carnivoro"){
        cout << "aguia" << endl;
    }
    // Se é herbivoro, pode ser vaca ou lagarta, tiro o desempate pela palavra dois
    if(palavra3 == "herbivoro"){
        if(palavra2 == "mamifero"){
            cout << "vaca" << endl;
        }
        else{
            cout << "lagarta" << endl;;
        }
    }
    // Se é hematofago, pode ser pulga ou sanguessuga, tiro o desempate pela palavra dois
    if(palavra3 == "hematofago"){
        if(palavra2 == "inseto"){
            cout << "pulga" << endl;
        }
        else{
            cout << "sanguessuga" << endl;
        }
    }
    // Se é onivoro, pode ser pomba, homem ou minhoca, tiro o desempate pela palavra dois
    if(palavra3 == "onivoro"){
        if(palavra2 == "ave"){
            cout << "pomba" << endl;
        }else if (palavra2 == "mamifero"){
            cout << "homem" << endl;
        }else if (palavra2 == "anelideo"){
            cout << "minhoca" << endl;
        }
    }
}