#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> numbers;
    vector<int> inputs;
    int aux;
    unsigned int counter;

    for(counter = 0; counter < 3; counter++){
        cin >> aux;
        numbers.push_back(aux);
    }

    inputs = numbers;

    sort(numbers.begin(), numbers.end());

    for(counter = 0; counter < 3; counter++){
        cout << numbers[counter] << endl;
    }

    cout << endl;

    for(counter = 0; counter < 3; counter++){
        cout << inputs[counter] << endl;
    }

    return 0;
}
