#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include <vector>

using namespace std;

//start of the main function
int main(){
    int leds[10];
    int N;
    unsigned int counter;
    string number;
    string::iterator it;
    int qtd;
    vector<string> entry;
    vector<int> res;

    leds[0] = 6;
    leds[1] = 2;
    leds[2] = 5;
    leds[3] = 5;
    leds[4] = 4;
    leds[5] = 5;
    leds[6] = 6;
    leds[7] = 3;
    leds[8] = 7;
    leds[9] = 6;

    cin >> N;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    for(counter = 0; counter < N; counter++){
        getline(cin, number);

        entry.push_back(number);
    }

    for(counter = 0; counter < N; counter++){
        qtd = 0;

        number = entry[counter];

        for(it = number.begin(); it != number.end(); ++it){
            if(*it == '0'){
                qtd += leds[0];
            }
            else if(*it == '1'){
                qtd += leds[1];
            }
            else if(*it == '2'){
                qtd += leds[2];
            }
            else if(*it == '3'){
                qtd += leds[3];
            }
            else if(*it == '4'){
                qtd += leds[4];
            }
            else if(*it == '5'){
                qtd += leds[5];
            }
            else if(*it == '6'){
                qtd += leds[6];
            }
            else if(*it == '7'){
                qtd += leds[7];
            }
            else if(*it == '8'){
                qtd += leds[8];
            }
            else if(*it == '9'){
                qtd += leds[9];
            }
        }

        res.push_back(qtd);
    }

    for(counter = 0; counter < N; counter++){
        cout << res[counter] << " leds" << endl;
    }

    return 0;
}
