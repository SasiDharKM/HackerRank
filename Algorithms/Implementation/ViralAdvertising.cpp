#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int count = 2,temp =2;
    int n;
    cin>>n;
    for(int i = 1;i<n;i++){
        temp = (temp * 3)/2;
        count  = count + temp;
    }
    cout<<count;
    return 0;
}