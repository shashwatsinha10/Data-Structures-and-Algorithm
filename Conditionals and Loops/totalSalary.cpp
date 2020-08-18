#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double pf, total, basic;
    int allow = 0;
    char grade;
    cin >> basic >> grade;
    int hra = basic * 0.2;
    int da = basic * 0.5;
    pf = basic * 0.11;
    if (grade == 'A'){
        allow = 1700;
    }
    else if (grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    total = basic + hra + da + allow - pf;
    int totalRound = round(total);
    cout << totalRound << endl;
}