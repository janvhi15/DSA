#include <iostream>
#include <stack>
using namespace std;

int postfix(string s){

    stack<int> stack;

    for(int i = 0; i <= s.length()-1; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            stack.push(s[i] - '0');
        }
        else{
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            

            switch(s[i]){
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':  
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    stack.push(operand1 / operand2);
                    break;
                default:
                    cout << "Invalid operator: " << s[i] << endl;
            }
        }
    }
    return stack.top();
}

int main(){
    string expr;
    cout << "Enter postfix expression: ";
    cin >> expr;

    cout << "Result = " << postfix(expr) << endl;
    return 0;
}