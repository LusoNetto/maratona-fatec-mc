#include <bits/stdc++.h>
using namespace std;
int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim, horas, minutos = 0;
    cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;
    // Nesse bloco de codigo eu verifico a diferença de horas
    if(horaInicio < horaFim){
        horas = horaFim - horaInicio;
    } else if(horaInicio > horaFim){
        horas = horaFim + 24 - horaInicio;
    } else if(horaInicio == horaFim){
        horas = 24;
    }
    // Nesse bloco de codigo eu verifico a diferença de minutos
    if(minutoInicio < minutoFim){
        minutos = minutoFim - minutoInicio;
    } else if(minutoInicio > minutoFim){
        minutos = minutoFim + 60 - minutoInicio;
        horas -= 1;
    } else if(minutoInicio == minutoFim){
        minutos = 0;
    }
    // Se eu tiver 60 minutos eu somo horas em 1 e zero os minutos
    if(minutos == 60){
        horas += 1;
        minutos = 0;
    }
    // Se no total eu tiver 24 horas e minutos maior que zero quer dizer que na linha 11 não seria 24 horas e sim 0 horas
    // Então eu corrijo isso aqui
    if(horas == 24 && minutos > 0){
        horas = 0;
    }
    cout << "O JOGO DUROU " << horas <<" HORA(S) E " << minutos << " MINUTO(S)" << endl;
}