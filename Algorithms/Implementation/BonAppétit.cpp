#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,b;
    cin>>n>>k;
    vector<int> c(n);
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(i!=k)
            sum+=c[i];
    }
    cin>>b;
    if(sum/2==b){
        cout<<"Bon Appetit";
    }
    else
        cout<<b-(sum/2);
    return 0;
}
