#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,i,j;
    string S;
    cin>>T;
    while(T--){
        cin>>S;
        for(i=0;i<S.length();i+=2)
            cout<<S[i];
        cout<<" ";
        for(i=1;i<S.length();i+=2)
            cout<<S[i];
        cout<<endl;
    }
    return 0;
}
