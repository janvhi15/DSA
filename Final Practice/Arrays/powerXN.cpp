// // Power(x,n) 

#include <iostream>
using namespace std;
int main(){
    double x = 2.00000;
    int n = -2;
    
    int binForm = n;
    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    cout << ans << endl;
}