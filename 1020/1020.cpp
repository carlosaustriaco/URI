#include <iostream>

using namespace std;

int main(){
    int n;
    int dia;
    int mes;
    int ano;

    cin >> n;

    ano = n/365;

    mes = (n - ano*365)/30;

    dia = n - mes*30 - ano*365;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
