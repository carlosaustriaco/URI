#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
	vector<float> pos;
	unsigned int counter;
	float aux;
	float media = 0.0;
	
	for(counter = 0; counter < 6; counter++){
		cin >> aux;
		
		if(aux > 0){
			pos.push_back(aux);
		}
	}

	cout << pos.size() << " valores positivos" << endl;

	for(counter = 0; counter < pos.size(); counter++){
		media += pos[counter];
	}

	media /= pos.size();

	cout << fixed;
	cout << setprecision(1);

	cout << media << endl;

	return 0;
}