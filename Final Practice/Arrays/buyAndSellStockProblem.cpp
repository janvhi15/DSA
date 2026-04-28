#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 6;
    int prices[] = {7,1,5,3,6,4};

    int maxProfit = 0;
    int bestBuy = prices[0];

    for(int i=0; i<n; i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy , prices[i]);
    }

    cout << "Max Profit : " << maxProfit << endl;
}