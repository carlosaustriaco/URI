#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cod, qtd;

    cin >> cod >> qtd;

    cout << "Total: R$ ";
    cout << setprecision(2);
    cout << fixed;

    if(cod == 1){
        cout << qtd*4.0 << endl;
    }
    else if(cod == 2){
        cout << qtd*4.5 << endl;
    }
    else if(cod == 3){
        cout << qtd*5.0 << endl;
    }
    else if(cod == 4){
        cout << qtd*2.0 << endl;
    }
    else{
        cout << qtd*1.5 << endl;
    }

    return 0;
}
