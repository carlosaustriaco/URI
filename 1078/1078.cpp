#include <iostream>

using namespace std;

int main(){
	int num;
	unsigned int counter;

	cin >> num;

	for(counter = 1; counter <= 10; counter++){
		cout << counter << " x " << num << " = " << counter*num << endl;
	}

	return 0;
}