#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//start of the main function
int main(){
    vector<int> inputs;
    vector<int> odd;
    vector<int> even;
    int num;
    int n;
    unsigned int counter = 0;

    cin >> n;

    //get the numbers
    while(counter < n){
        cin >> num;
        inputs.push_back(num);
        counter++;
    }

    //separating into evens and odds
    for(counter = 0; counter < inputs.size(); counter++){
        if(inputs[counter] % 2 == 0){
            even.push_back(inputs[counter]);
        }
        else{
            odd.push_back(inputs[counter]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());

    for(counter = 0; counter < even.size(); counter++){
        cout << even[counter] << endl;
    }

    for(counter = 0; counter < odd.size(); counter++){
        cout << odd[counter] << endl;
    }

    return 0;
}
