#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    string aux;
    vector<string> input;
    vector<string> output;
    unsigned int counter;
    unsigned int counter2;

    cin >> n;

    cin.clear();
    getchar();

    for(counter = 0; counter < n; counter++){
        getline(cin, aux);
        input.push_back(aux);
    }

    for(counter = 0; counter < n; counter++){
        aux = "";

        for(counter2 = 0; counter2 < input[counter].size(); counter2++){
            if(isalpha(input[counter][counter2])){
                aux += input[counter][counter2] + 3;
            }
            else{
                aux += input[counter][counter2];
            }
        }

        reverse(aux.begin(), aux.end());

        for(counter2 = aux.size()/2; counter2 < aux.size(); counter2++){
            aux[counter2] -= 1;
        }

        output.push_back(aux);
    }

    for(counter = 0; counter < n; counter++){
        cout << output[counter] << endl;
    }

    return 0;
}
