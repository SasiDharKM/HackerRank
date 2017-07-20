#include<bits/stdc++.h>

using namespace std;

int rever(int n){
    int res=0;
    while(n>0){
        res=res*10+ (n%10);
        n/=10;
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k, count=0;
    cin>>i>>j>>k;
    for(int c = i;c<=j;c++){
        if((rever(c) - c)%k == 0)
            count++;
    }
    cout<<count;
    return 0;
}
