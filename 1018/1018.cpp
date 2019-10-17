#include <iostream>

using namespace std;

int main(){
    long notas;
    long aux_notas;
    long nota_100;
    long nota_50;
    long nota_20;
    long nota_10;
    long nota_5;
    long nota_2;
    long nota_1;

    cin >> notas;

    aux_notas = notas;
    nota_100 = notas/100;
    notas -= nota_100*100;
    nota_50 = notas/50;
    notas -= nota_50*50;
    nota_20 = notas/20;
    notas -= nota_20*20;
    nota_10 = notas/10;
    notas -= nota_10*10;
    nota_5 = notas/5;
    notas -= nota_5*5;
    nota_2 = notas/2;
    notas -= nota_2*2;
    nota_1 = notas;

    cout << aux_notas << endl;
    cout << nota_100 << " nota(s) de R$ 100,00" << endl;
    cout << nota_50 << " nota(s) de R$ 50,00" << endl;
    cout << nota_20 << " nota(s) de R$ 20,00" << endl;
    cout << nota_10 << " nota(s) de R$ 10,00" << endl;
    cout << nota_5 << " nota(s) de R$ 5,00" << endl;
    cout << nota_2 << " nota(s) de R$ 2,00" << endl;
    cout << nota_1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
