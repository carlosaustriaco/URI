#include <iostream>
#include <vector>

using namespace std;

//prototype of the functions
int fibonacci(int pos, int* aux);

//start of the main function
int main(){
    int N;
    vector<int> inputs;
    vector<int> num_calls;
    vector<int> calls;
    int aux_calls = 0;
    int aux_inputs;
    int aux_outputs;
    unsigned int counter;

    //getting the quantity of inputs
    cin >> N;

    //getting the inputs
    for(counter = 0; counter < N; counter++){
        cin >> aux_inputs;
        inputs.push_back(aux_inputs);
    }

    //getting the fibonacci results
    for(counter = 0; counter < N; counter++){
        aux_outputs = fibonacci(inputs[counter], &aux_calls);
        calls.push_back(aux_outputs);
        num_calls.push_back(aux_calls);
        aux_calls = 0;
    }

    //showing the fibonacci results
    for(counter = 0; counter < N; counter++){
        cout << "fib(" << inputs[counter] << ") = " << num_calls[counter] - 1 << " calls = " << calls[counter] << endl;
    }

    return 0;
}

//a function that calculates the fibonacci function
int fibonacci(int pos, int* aux){
    if(pos == 0){
        *aux += 1;
        return 0;
    }
    else if(pos == 1){
        *aux += 1;
        return 1;
    }
    else{
        *aux += 1;
        return fibonacci(pos - 1, aux) + fibonacci(pos - 2, aux);
    }
}
