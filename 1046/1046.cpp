#include <iostream>

using namespace std;

int main(){
	int num1, num2;

	cin >> num1 >> num2;

	if(num1 == num2){
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	}

	if(num1 < num2){
		cout << "O JOGO DUROU " << (num2 - num1) << " HORA(S)" << endl;
	}

	if(num1 > num2){
		cout << "O JOGO DUROU " << (24 - num1 + num2) << " HORA(S)" << endl;
	}

	return 0;
}