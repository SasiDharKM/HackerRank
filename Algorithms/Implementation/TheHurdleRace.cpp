#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int k;
    int temp,maxi=0;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
       if(height[height_i]>maxi)
           maxi = height[height_i];
    }
    if(maxi <= k){
        cout<<0;
    }
    else{
        cout<<maxi -k;
    }
    return 0;
}