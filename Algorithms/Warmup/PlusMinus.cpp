#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pn=0.0,nn=0.0,zn=0.0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for( int j = 0; j< n; j++){
        if(arr[j]< 0){
            nn+=1;       
        }
        else if (arr[j]>0){
            pn+=1;
        }
        else {
            zn+=1;
        }
    }
    cout << pn/n <<'\n'<< nn/n <<'\n'<< zn/n;
    return 0;
}
