#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <ios>
#include <limits>

using namespace std;

//start of the main function
int main(){
    stack<bool> check;
    unsigned int N;
    vector<string> inputs;
    unsigned int counter;
    string aux_input;
    int output = 0;
    string::iterator it;

    //getting the number of inputs
    cin >> N;

    //cleaning the buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //getting the inputs
    for(counter = 0; counter < N; counter++){
        getline(cin, aux_input);
        inputs.push_back(aux_input);
    }

    //getting the outputs
    for(counter = 0; counter < N; counter++){
        for(it = inputs[counter].begin(); it != inputs[counter].end(); ++it){
            if(*it == '<'){
                check.push(true);
            }
            if(*it == '>'){
                if(!check.empty()){
                    check.pop();
                    output++;
                }
            }
        }

        cout << output << endl;
        output = 0;

        while(!check.empty()){
            check.pop();
        }
    }

    return 0;
}
