#include <iostream>

using namespace std;

int mdc(int num1, int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        return mdc(num2, num1 % num2);
    }
}

int main(){
    int n;
    int fig1, fig2;
    unsigned int counter;

    cin >> n;

    for(counter = 0; counter < n; counter++){
        cin >> fig1 >> fig2;
        cout << mdc(fig1, fig2) << endl;
    }

    return 0;
}
