#include <iostream>
#include <list>
#include <vector>

using namespace std;

//start of the main function
int main(){
    list<int> cards;
    list<int>::iterator it = cards.end();
    vector<int> discard;
    int n;
    unsigned int counter;

    //getting the value of n
    cin >> n;

    while(n != 0){
        //creating the list
        for(counter = 1; counter <= n; counter++){
            cards.push_back(counter);
        }

        //discarding the cards
        while(cards.size() != 1){
            discard.push_back(cards.front());
            cards.pop_front();
            cards.insert(it, cards.front());
            cards.pop_front();
        }

        cout << "Discarded cards: ";
        for(counter = 0; counter < discard.size(); counter++){
            cout << discard[counter];

            if(counter != discard.size() - 1){
                cout << ", ";
            }
        }
        cout << endl;

        cout << "Remaining card: " << cards.front() << endl;

        cards.clear();
        discard.clear();


        cin >> n;
    }

    return 0;
}
