#include<iostream>
using namespace std;
int main(){
    int n = 0, i = 1;
    cin >> n;
    while(i <= n){
        int j = 1, value = i;
        while(j <= i){
            cout << value;
            value--;
            j++;
        }
        cout << endl;
        i++;
    }
}