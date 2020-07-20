#include <iostream>

using namespace std;

int main(){
	int num;
	unsigned int counter;

	cin >> num;

	for(counter = 1; counter <= num; counter++){
		if((counter % 2) == 1){
			cout << counter << endl;
		}
	}
	return 0;
}