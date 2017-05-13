#include <bits/stdc++.h>

using namespace std;

int getWays(vector < int > squares, int d, int m){
    int i,j,count=0,sum;
    for(i=0;i<squares.size()-m+1;i++){
        sum=0;
        for(j=0;j<m;j++)
            sum+=squares[i+j];
        if(sum==d)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}
