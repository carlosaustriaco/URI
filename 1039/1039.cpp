#include <iostream>
#include <cmath>

using namespace std;

//prototype of functions
double calculatingDistance(double x1, double x2, double y1, double y2);

//start of the main function
int main(){
    double r1, x1, y1, r2, x2, y2;

    //getting the values
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        if(r1 >= (calculatingDistance(x1, x2, y1, y2) + r2)){
            cout << "RICO" << endl;
        }
        else{
            cout << "MORTO" << endl;
        }
    }

    return 0;
}

//a function to calculate the distance between two points
double calculatingDistance(double x1, double x2, double y1, double y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
