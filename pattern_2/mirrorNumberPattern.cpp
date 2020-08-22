#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    while(i <= n){
        int space = 1;
        while(space <= n - i){
            cout << ' ';
            space++;
        }
        int j = 1;
        while(j <= i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}