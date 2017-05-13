#include <bits/stdc++.h>

using namespace std;
bool leap(int year){
    if(year%4==0 && year%100!=0)
        return true;
    else if(year%400==0)
        return true;
    else 
        return false;
}
string solve(int year){
    int days = 243;
    if(leap(year))
        days++;
    int d=256-days;
    if(year==1918)
        d+=13;
    return char(d/10)+char(d)+".09."+char(year/1000)+char((year%1000)/100)+char((year%100)/10)+char(year%10);
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
