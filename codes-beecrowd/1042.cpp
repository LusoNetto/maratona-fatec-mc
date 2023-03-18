#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Declarando um array de 3 posições
    int arr[3];
    int arrOriginal[3];
    for(int i = 0; i < 3; i++){
      //Recebendo as entradas
        cin  >> arr[i];
        arrOriginal[i] = arr[i];
    }
  //Colocando em n o tamanho do array
    int n = sizeof(arr) / sizeof(arr[0]);
  //Utilizando o sort da STL para fazer o ordenamento do array
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << endl;
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << arrOriginal[i] << endl;
}
