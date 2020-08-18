#include<iostream>
using namespace std;
int main(){
    int n = 0, even = 0, odd = 0;
    cin >> n;
    while(n > 0){
        int digit = n % 10;
        if (digit % 2 == 0){
            even = even + digit;
        }
        else{
            odd = odd + digit;
        }
        n = n / 10;
    }
    cout << even << " " << odd << endl;
}