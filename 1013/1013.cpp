#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num1, num2, num3;
    int aux;

    cin >> num1 >> num2 >> num3;

    aux = (num1 + num2 + abs(num1 - num2))/2;

    cout << (aux + num3 + abs(aux - num3))/2 << " eh o maior" << endl;

    return 0;
}
