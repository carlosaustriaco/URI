#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main()
{
    //the input variables
    double A, B, C;
    //the pi value
    const double pi = 3.14159;

    //get the input from the user
    cin >> A >> B >> C;

    //set the precision
    cout << setprecision(3);
    cout << fixed;

    //show the area of the rectangle triangle
    cout << "TRIANGULO: " << (A*C)/2 << endl;

    //show the area of the circle
    cout << "CIRCULO: " << pi*C*C << endl;

    //show the area of the trapeze
    cout << "TRAPEZIO: " << (A + B) * C / 2 << endl;

    //show the area of the square
    cout << "QUADRADO: " << B*B << endl;

    //show the area of the rectangle
    cout << "RETANGULO: " << A*B << endl;

    return 0;
}
