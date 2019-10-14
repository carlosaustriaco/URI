#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    double food;
    unsigned int counter;
    vector<int> dias;

    cin >> n;

    for(counter = 0; counter < n; counter++){
        cin >> food;
        dias.push_back(ceil((log(food)/log(2))));
    }

    for(counter = 0; counter < dias.size(); counter++){
        cout << dias[counter] << " dias" << endl;
    }

    return 0;
}
