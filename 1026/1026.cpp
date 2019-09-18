#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//start of the main function
int main(){
    //the input variables
    unsigned long num1, num2;
    //the output
    unsigned long res;

    //getting the numbers from the user
    while(cin >> num1 >> num2){
        res = num1 ^ num2;

        cout << res << endl;
    }

    return 0;
}
