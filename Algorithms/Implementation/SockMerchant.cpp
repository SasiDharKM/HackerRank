#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,i=0,j=1,count=0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(),c.end());
    while(j<c.size()){
        if(c[i]==c[j]){
            i+=2;
            j+=2;
            count++;
        }
        else{
            i+=1;
            j+=1;
        }
    }
    cout<<count;
    return 0;
}
