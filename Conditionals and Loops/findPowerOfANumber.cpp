#include<iostream>
using namespace std;
int main() {
    int x = 0, n = 0;
    int ans = 1;
    cin >> x >> n;
    while(n > 0){
        ans = ans * x;
        n--;
    }
    cout << ans << endl;
}  
