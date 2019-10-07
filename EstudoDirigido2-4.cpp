#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

double CONVERTE_MOEDA(double valor, double moeda){
    cout << "Digite o valor, em reais, a ser convertido: ";
    cin >> valor;
    cout << "Digite [1] para conversão em dólar ou [2] para conversão em euro: ";
    cin >> moeda;

    if (moeda == 1)
    {
        valor = valor * 4.17;
        cout << valor;
    }
    else
    {
        valor = valor * 4.59;
        cout << valor;
    }
}

int main(){
    double valor, moeda;

    CONVERTE_MOEDA(valor, moeda);
return 0;
}
