#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool arePair(char open , char close){
    if (open == '(' && close == ')') return true;
    else if (open == '{' && close == '}') return true;
    else if (open == '[' && close == ']') return true;

    return false;
}

bool areBalanced (string exp){
    stack <char> st;
    for (int i = 0 ; i < exp.length() ; i++){
            if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[') st.push(exp[i]);
            else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']'){
                if (st.empty() || !arePair(st.top(),exp[i])) return false;
                else st.pop();
            }
    }
    return st.empty();

    }
int main(){
    string exp;
    cin >> exp;
    if (areBalanced(exp)) cout << "true ";
    else cout << "false ";
    return 0;
}
