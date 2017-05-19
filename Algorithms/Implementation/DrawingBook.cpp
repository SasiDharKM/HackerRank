#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    n/=2;
    p/=2;
    if(n-p > p)
        return p;
    return (n-p);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}