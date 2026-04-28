#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

int applyOp(int a, int b, char op){
    switch(op){
        case '+' : return a + b;
        case '-' : return a - b;
        case '*' : return a * b;
        case '/' : return a / b;
        case '^' : return pow(a,b);
    }
    return 0;
}

int evaluatePrefix(string exp){
    stack<int> st;

    for(int i = exp.length()-1; i>=0; i--){
        if(isdigit(exp[i])){
            st.push(exp[i]-'0');
        }
        else{
            int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();
            int result = applyOp(val1, val2, exp[i]);
            st.push(result);
        }
    }
    return st.top();
}

int main(){
    string exp = "*+235";

    int result = evaluatePrefix(exp);
    cout << result << endl;
}