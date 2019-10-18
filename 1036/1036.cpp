#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    double delta, r1, r2;

    cin >> a >> b >> c;

    if(a == 0.0){
        cout << "Impossivel calcular" << endl;
    }

    else{
       delta = b*b - 4*a*c;

        if(delta < 0){
            cout << "Impossivel calcular" << endl;
        }

        else{
            r1 = (b*(-1) + sqrt(delta))/(2*a);
            r2 = (b*(-1) - sqrt(delta))/(2*a);

            cout << setprecision(5);
            cout << fixed;

            cout << "R1 = " << r1 << endl;
            cout << "R2 = " << r2 << endl;
        }
    }

    return 0;
}
