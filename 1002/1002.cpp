#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	const double pi = 3.14159;
	//the input variable that represents the radius of the circle
	double r;

	//get the input
	cin >> r;

	//show the area of the circle
	cout << setprecision(4);
	cout << fixed;
	cout << "A=" << pi*r*r << endl;

	return 0;
}