#include<iostream>
using namespace std;
int main(){
    int i = 1, n = 0;
    cin >> n;
    while(i <= n){
        int j = 1;
        char val = 'A' + i - 1;
        while(j <= i){
            cout << val;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
}