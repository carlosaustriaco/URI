#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    double y;

    cin >> x >> y;

    cout << setprecision(3);
    cout << fixed;
    cout << x/y << " km/l" << endl;

    return 0;
}
