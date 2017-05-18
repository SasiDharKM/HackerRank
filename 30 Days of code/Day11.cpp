#include <bits/stdc++.h>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int sum=0,lar=INT_MIN;
    for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
           sum+=arr[i][j];
           sum+=arr[i][j+1];
           sum+=arr[i][j+2];
           sum+=arr[i+1][j+1];
           sum+=arr[i+2][j];
           sum+=arr[i+2][j+1];
           sum+=arr[i+2][j+2];
           if(sum>lar)
               lar=sum;
           sum=0;
       }
    }
    cout<<lar;
    return 0;
}