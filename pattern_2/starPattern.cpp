#include<iostream>
using namespace std;
int main(){
    int i = 1, n = 0;
    cin >> n;
    while(i <= n){
        int space = 1, j = 1;
        while(space <= n - i){
            cout << ' ';
            space++;
        }
        while(j <= ((2*i) - 1)){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
}