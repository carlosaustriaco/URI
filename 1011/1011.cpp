#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	double raio;
	double pi = 3.14159;

	//get the information
	cin >> raio;

	//show to the user
	cout << setprecision(3);
	cout << fixed;
	cout << "VOLUME = " << 4.0*pi*raio*raio*raio/3 << endl;

	return 0;
}