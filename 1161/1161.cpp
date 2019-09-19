#include <iostream>

using namespace std;

//prototype of the functions
unsigned long long factorial(int num);

//start of the main function
int main(){
    int M, N;

    //getting the values from the users
    while(cin >> M >> N){
        cout << factorial(M) + factorial (N) << endl;
    }

    return 0;
}

//a function to calculate factorial
unsigned long long factorial(int num){
    unsigned long long res;

    if(num == 0){
        return 1;
    }

    if(num == 1){
        return 1;
    }
    else{
        return num*factorial(num - 1);
    }
}
