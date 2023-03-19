#include <bits/stdc++.h>
using namespace std;
// Esse problema poderia ser resolvido de forma mais "simples"
// Porem resolvi aplicar Two Pointer nele para evitar processamento desnecessário
// Aconselho ver a primeira parte desse video para entender a ideia da resolução
// link: "https://www.youtube.com/watch?v=Jq1uuqdoQl0"
int main() {
    int n = 0;
    cin >> n;
    int i = 1, j = n;
    // aqui eu dou uma posicao para a esquerda e direita
    // para ficar mais simples assumi o vetor comecando da posicao 1 e nao da 0
    // eu perdi uma posicao mais ganhei em clareza de código
    int posicaoEsquerda = 1, posicaoDireita = n;
    // Aqui eu seto como verdadeiro, porque ainda não sei a primeira posicao que aparece um numero valido
    bool procurandoEsquerda = true, procurandoDireita = true;
    // declaro um array com n+2 posicoes porque vou comecar do 1 e nao do zero entao nao quero ter problemas
    int array[n+2];
    int in = 0;
    int out = 0;
    for(int i = 1; i<=n;i++) {
        cin >> array[i];
    }
    // aqui eu ordeno os valores que eu recebi
    int m = sizeof(array) / sizeof(array[0]);
    sort(array+1, array + n+1);
    // ---------------------------------------
    // Agora procuro a primeira e ultima posicao que satisfaz a restricao [10,20]
    while(j>i && (procurandoEsquerda || procurandoDireita)){
        if(array[i]>=10 && array[i]<=20 && procurandoEsquerda){
            posicaoEsquerda = i;
            // quando eu acho eu coloco falso em procurandoEsquerda
            procurandoEsquerda = false;
        }
        if(array[j]>=10 && array[j]<=20 && procurandoDireita){
            posicaoDireita = j;
            // quando eu acho eu coloco falso em procurandoDireita
            procurandoDireita = false;
        }
        i++;
        j--;
    }
    // O numero de elementos dentro é a posicao final(posicaoDireita) - posicaoInicial(posicaoEsquerda) + 1
    // exemplo: 1 1 1 1 10 10 10 20 30 30
    // inicio = 5 e final = 8, numero de elemento dentro = 8 - 5 + 1 = 4
    // O numero de elementos fora é o numero total de elementos menos os que estao dentro
    // 10 - 4 = 6
    in = posicaoDireita - posicaoEsquerda + 1;
    out = n - in;
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}