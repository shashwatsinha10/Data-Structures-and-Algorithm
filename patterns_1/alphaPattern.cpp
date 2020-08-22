#include<iostream>
using namespace std;
int main(){
    int n = 0, i = 1;
    cin >> n;
    while(i <= n){
        char val = 'A' + i - 1;
        int j = 1;
        while(j <= i){
            cout << val;
            j++;
        }
        cout << endl;
        i++;
    }
}