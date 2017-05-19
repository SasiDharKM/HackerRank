#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, step=0,vl=0,prev=0;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='D')
            step--;
        else if(s[i]=='U')
            step++;
        if(step == 0 && s[i]=='U')
            vl++;
    }
    cout<<vl;
    return 0;
}
