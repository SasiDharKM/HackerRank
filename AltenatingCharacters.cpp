#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,count,j;
    string ab;
    cin>>t;
    for(int i=0;i<t;i++){
        count=0;
        cin >> ab;
        for(j=1;j<ab.size();j++){
            if(ab[j]==ab[j-1]){
                count++;
            }
        }
        cout<<count<<'\n'; 
    }
    return 0;
}
