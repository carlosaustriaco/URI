#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//start of the main function
int main(){
	string nome;
	double fixo, montante;

	//get the informations
	cin >> nome >> fixo >> montante;

	//show to the user
	cout << setprecision(2);
	cout << fixed;
	cout << "TOTAL = R$ " << fixo + 0.15*montante << endl;

	return 0;
}