// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     // string str = "if(arr(4)>9) { foo(arr[2]); }";
//     string str = "if ( arr[7 ) ]";

//     stack<char> st;

//     for(int i=0;i<str.length();i++){
//         if(str[i] == '(' || str[i] == '{' || str[i] == '['){
//             st.push(str[i]);
//         }
//         else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
//             if(st.empty()){
//                 cout << "Error" << endl;
//             };
//             if (st.top() == '(' && str[i] == ')'|| 
//                 st.top() == '{' && str[i] == '}'|| 
//                 st.top() == '[' && str[i] == ']') {
//                 st.pop();
//             }
//         }
//     }
//     if(st.empty()){
//         cout << "Success" << endl;
//     }else{
//         cout << "Error" << endl;
//     }
// }


// // Ques 7
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "52C2D+";

//     vector<int> record;

//     for(char c:s){
//             if(isdigit(c)){
//                 record.push_back(c - '0');
//             }
//             else if(c == 'C'){
//                 if(!record.empty())
//                     record.pop_back();
//             }
//             else if(c == 'D'){
//                 if(!record.empty())
//                     record.push_back(record.back() * 2);
//             }
//             else if(c == '+'){
//                 if(record.size() >= 2){
//                     record.push_back(record[record.size()-1]+ record[record.size()-2]);
//                 }
//             }
//     }

//     int total = 0;
//     for (int x : record) total += x;

//     cout << total;
// }





#include <iostream>
using namespace std;
int main(){
    int R, C;
    cin >> R >> C;

    vector<vector<int>> seats(R, vector<int> C);

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            
        }
    }
}