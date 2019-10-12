#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> inputs;
    vector<int> tries;
    vector<int>::iterator it;
    int n;
    int q;
    int num;
    int tent = 1;
    unsigned int counter;

    while(cin >> n >> q){
        if((n == 0) && (q == 0)){
            break;
        }

        for(counter = 0; counter < n; counter++){
            cin >> num;
            inputs.push_back(num);
        }

        for(counter = 0; counter < q; counter++){
            cin >> num;
            tries.push_back(num);
        }

        sort(inputs.begin(), inputs.end());

        cout << "CASE# " << tent << ":" << endl;

        for(counter = 0; counter < q; counter++){
            it = find(inputs.begin(), inputs.end(), tries[counter]);

            if(it == inputs.end()){
                cout << tries[counter] << " not found" << endl;
            }
            else{
                cout << tries[counter] << " found at " << (it - inputs.begin()) + 1 << endl;
            }
        }

        tent++;
        inputs.clear();
        tries.clear();
    }


    return 0;
}
