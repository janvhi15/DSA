#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    d.push_front(4);

    cout << d.front() << " " << d.back();
}