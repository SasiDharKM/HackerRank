#include <bits/stdc++.h>

using namespace std;

int getMaxMonsters(int n, int hit, int t, vector < int > h){
    // Complete this function
    sort(h.begin(),h.end());
    int count=0,i=0;   
    while(t > 0 && i<n){
        int time = (int)ceil((double)h[i]/hit);
        t-=time;
        if(t<0)
            break;
        i++;
        count++;
    }
    return count;
}

int main() {
    int n;
    int hit;
    int t;
    cin >> n >> hit >> t;
    vector<int> h(n);
    for(int h_i = 0; h_i < n; h_i++){
       cin >> h[h_i];
    }
    int result = getMaxMonsters(n, hit, t, h);
    cout << result << endl;
    return 0;
}
