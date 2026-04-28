#include <iostream>
#include <algorithm> 
#include <stack>
#include <vector>
using namespace std;

class MinStack{
    public:
    stack<pair<int, int>> s;
    MinStack(){

    }

    void push(int val){
        if(s.empty()){
            s.push({val, val});
        }
        else{
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop(){
        s.pop();
    }

    int top(){
        return s.top().first;
    }

    int getMin(){
        return s.top().second;
    }
};

int main(){
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);

    cout << s.getMin() << endl;

    s.pop();

    s.top();

    cout << s.getMin() << endl;

}