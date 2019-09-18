#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	//input variables
	double grade1, grade2;

	//get the grades
	cin >> grade1 >> grade2;

	//show the media
	cout << setprecision(5);
	cout << fixed;
	cout << "MEDIA = " << (3.5*grade1 + 7.5*grade2)/11 << endl;

	return 0;
}