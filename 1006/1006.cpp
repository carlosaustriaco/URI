#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	//input variables
	double grade1, grade2, grade3;

	//get the grades
	cin >> grade1 >> grade2 >> grade3;

	//show the media
	cout << setprecision(1);
	cout << fixed;
	cout << "MEDIA = " << (2*grade1 + 3*grade2 + 5*grade3)/10 << endl;

	return 0;
}