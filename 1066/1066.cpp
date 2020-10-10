#include <iostream>

using namespace std;

int main(){
	int num[5];
	unsigned int counter;
	unsigned int pos = 0, neg = 0, par = 0, impar = 0;

	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	for(counter = 0; counter < 5; counter++){
		if(num[counter] > 0){
			pos++;
		}
		if(num[counter] < 0){
			neg++;
		}
		if(num[counter] % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}

	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;

	return 0;
}
