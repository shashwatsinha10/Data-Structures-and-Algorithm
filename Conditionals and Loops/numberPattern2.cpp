/*
Number Pattern 2

Print the following pattern
Pattern for N = 4

   1
  23
 345
4567

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789
*/

#include<iostream>
using namespace std;
int main(){
  int n, i = 1;
  cin >> n;
  while(i <= n){
    int space = 1;
    while(space <= n-i){
      cout << " ";
      space++;
    }
    int j = 1;
    int val = i;
    while(j <= i){
      cout << val;
      val++;
      j++;
    }
    cout << '\n';
    i++;
  }
}
