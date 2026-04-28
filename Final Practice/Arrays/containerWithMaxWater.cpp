// // Brute force approach
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int maxWater = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            int w = j-i;
            int h = min(height[i], height[j]);
            int area = h * w;
            maxWater = max(maxWater, area);
        }
    }

    cout << "Max Water : " << maxWater << endl;
}








// // Optimised approach
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int maxWater = 0;
    int i = 0, j = n-1;
    while(i<j){
        int w = j - i;
        int h = min(height[i], height[j]);
        int area = w * h;
        maxWater = max(maxWater, area);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
    }

    cout << "Max Water : " << maxWater << endl;
}