#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int count =0;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
           if(a[a_i]<=0)
               count++;
        }
        (count<k)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
