#include<iostream>
using namespace std;
int main(){
    int n = 0, i = 1;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n - i + 1){
            cout << n - i + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}