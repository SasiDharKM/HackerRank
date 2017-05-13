#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n), cla(5);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
       cla[types[types_i]-1]++;
    }
    int lar=0;
    for(int i=1;i<5;i++){
        if(cla[lar]<cla[i])
            lar=i;
    }
    cout<<lar+1;
    return 0;
}