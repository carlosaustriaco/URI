#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	int codigo1, codigo2, qntd1, qntd2;
	double valor1, valor2;

	//get the informations
	cin >> codigo1 >> qntd1 >> valor1 >> codigo2 >> qntd2 >> valor2;

	//show the information to the user
	cout << setprecision(2);
	cout << fixed;
	cout << "VALOR A PAGAR: R$ " << qntd1*valor1 + qntd2*valor2 << endl;

	return 0;
}