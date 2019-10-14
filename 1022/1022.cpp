#include <cstdio>
#include <iostream>

using namespace std;

int mdc(int num1, int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        return mdc(num2, num1 % num2);
    }
}

int main(){
    int n1, n2, d1, d2;
    char ch;
    int n;
    unsigned int counter;
    int res_num, res_den;

    cin >> n;

    for(counter = 0; counter < n; counter++){
       scanf("%d / %d %c %d / %d", &n1, &d1, &ch, &n2, &d2);

       if(ch == '+'){
            res_num = n1*d2 + n2*d1;
            res_den = d1*d2;
       }
       else if (ch == '-'){
            res_num = n1*d2 - n2*d1;
            res_den = d1*d2;
       }
       else if (ch == '*'){
            res_num = n1*n2;
            res_den = d1*d2;
       }
       else{
            res_num = n1*d2;
            res_den = n2*d1;
       }

       cout << res_num << "/" << res_den << " = " << res_num/(mdc(res_num, res_den) < 0 ? -1*mdc(res_num, res_den) : mdc(res_num, res_den)) << "/" << res_den/(mdc(res_num, res_den) < 0 ? -1*mdc(res_num, res_den) : mdc(res_num, res_den)) << endl;
    }

    return 0;
}
