#include<iostream>
using namespace std;
int main(){
    int n = 0, i = 1;
    cin >> n;
    while(i <= n){
        int space = 1;
        while(space <= n - i){
            cout << ' ';
            space++;
        }
        int j = 1, val = i;
        while(j <= i){
            cout << val;
            val++;
            j++;
        }
        j = 1;
        val = ((2 * i) - 2);
        while(j <= i - 1){
            cout << val;
            val--;
            j++;
        }
        cout << endl;
        i++;
    }
}