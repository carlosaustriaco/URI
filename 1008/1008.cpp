#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	//input variables
	int number, hours;
	double rate;

	//get the input variables
	cin >> number >> hours >> rate;

	//show to the user
	cout << "NUMBER = " << number << endl;
	cout << setprecision(2);
	cout << fixed;
	cout << "SALARY = U$ " << hours*rate << endl;

	return 0;
}