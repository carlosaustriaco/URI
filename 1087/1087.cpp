#include <iostream>
#include <vector>

struct local{
    int row;
    int column;
};

typedef struct local Local;

using namespace std;

void diagonal(vector<Local> *p, int x, int y){
    Local aux;
    int x_aux;
    int y_aux;

    x_aux = x;
    y_aux = y;

    while((x_aux > 1) && (y_aux > 1)){
        x_aux--;
        y_aux--;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    x_aux = x;
    y_aux = y;

    while((x_aux < 8) && (y_aux < 8)){
        x_aux++;
        y_aux++;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    x_aux = x;
    y_aux = y;

    while((x_aux > 1) && (y_aux < 8)){
        x_aux--;
        y_aux++;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    x_aux = x;
    y_aux = y;

    while((x_aux < 8) && (y_aux > 1)){
        x_aux++;
        y_aux--;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }
}

void rect(vector<Local> *p, int x, int y){
    Local aux;
    int x_aux;
    int y_aux;

    x_aux = x;
    y_aux = y;

    while(x_aux > 1){
        x_aux--;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    x_aux = x;

    while(x_aux < 8){
        x_aux++;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    x_aux = x;

    while(y_aux > 1){
        y_aux--;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }

    y_aux = y;

    while(y_aux < 8){
        y_aux++;
        aux.row = x_aux;
        aux.column = y_aux;
        p->push_back(aux);
    }
}

int main(){
    int x1, x2, y1, y2;
    vector<local> poss;
    bool state = false;
    unsigned int counter;

    while(cin >> x1 >> y1 >> x2 >> y2){
        if(x1 == 0){
            break;
        }

        if((x1 == x2) && (y1 == y2)){
            cout << 0 << endl;
        }
        else{
            local objective = {.row = x2, .column = y2};

            diagonal(&poss, x1, y1);
            rect(&poss, x1, y1);

            for(counter = 0; counter < poss.size(); counter++){
                if((poss[counter].row == objective.row) && (poss[counter].column == objective.column)){
                    state = true;
                }
            }

            if(state){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }

            state = false;
            poss.clear();
        }
    }

    return 0;
}
