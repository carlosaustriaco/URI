#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float sal;

	cin >> sal;

	cout << fixed;
	cout << setprecision(2);

	if(sal <= 400){
		cout << "Novo salario: " << sal*1.15 << endl;
		cout << "Reajuste ganho: " << sal*0.15 << endl;
		cout << "Em percentual: 15 %" << endl;
	}

	else if((sal > 400) && (sal <= 800)){
		cout << "Novo salario: " << sal*1.12 << endl;
		cout << "Reajuste ganho: " << sal*0.12 << endl;
		cout << "Em percentual: 12 %" << endl;
	}

	else if((sal > 800) && (sal <= 1200)){
		cout << "Novo salario: " << sal*1.1 << endl;
		cout << "Reajuste ganho: " << sal*0.1 << endl;
		cout << "Em percentual: 10 %" << endl;
	}

	else if((sal > 1200) && (sal <= 2000)){
		cout << "Novo salario: " << sal*1.07 << endl;
		cout << "Reajuste ganho: " << sal*0.07 << endl;
		cout << "Em percentual: 7 %" << endl;
	}

	else{
		cout << "Novo salario: " << sal*1.04 << endl;
		cout << "Reajuste ganho: " << sal*0.04 << endl;
		cout << "Em percentual: 4 %" << endl;		
	}



	return 0;
}