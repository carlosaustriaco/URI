#include <iostream>
#include <stack>

using namespace std;

//start of the main function
int main(){
    //an stack to check if there is a parenthesis
    stack<bool> check;
    //the expression given
    string expression;
    //an iterator of the string
    string::iterator it;
    //a variable to check if the expression is correct
    bool state = true;

    //getting the expressions
    while(getline(cin, expression)){
        //checking all elements of the string
        for(it = expression.begin(); it != expression.end(); ++it){
            //checking if this element of the expression is an opening parenthesis
            if(*it == '('){
                check.push(true);
            }
            //checking if this element of the expression is a closing parenthesis
            if(*it == ')'){
                //checking if the stack is empty
                if(check.empty()){
                    state = false;
                    break;
                }
                else{
                    check.pop();
                }
            }
        }

        //checking if in the end of the expression, the stack is empty
        if(!check.empty()){
            state = false;
        }

        //giving the information whether the expression is correct or not
        if(state){
            cout << "correct" << endl;
        }
        else{
            cout << "incorrect" << endl;
            state = true;
        }

        //clean the stack
        while(!check.empty()){
            check.pop();
        }
    }

    return 0;
}
