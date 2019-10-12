#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int time;
    int speed;
    double distance;

    cin >> time >> speed;

    distance = (double)(time*speed);

    cout << setprecision(3);
    cout << fixed;
    cout << distance/12.0 << endl;

    return 0;
}
