#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n) , freq(100);
    freq.assign(100 , 0);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       freq[a[a_i]]++;
    }
    int maxi= freq[0] + freq[1];
    int temp;
    for(int i =1; i<99;i++){
        temp = freq[i] + freq[i+1];
        if(temp>maxi)
            maxi = temp;
    }
    cout<<maxi<<'\n';
    return 0;
}
