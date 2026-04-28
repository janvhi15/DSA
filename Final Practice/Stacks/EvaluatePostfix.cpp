#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a,b);
    }
    return 0;
}

int evaluatePostfix(string exp){
    stack<int> s;

    for(char ch : exp){
        if(isdigit(ch)){
            s.push(ch - '0');
        }
        else{
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            int result = applyOp(val1, val2, ch);
            s.push(result);
        }
    }
    return s.top();
}

int main(){
    string exp = "546+*493/+*";

    int result = evaluatePostfix(exp);
    cout << result << endl;
}