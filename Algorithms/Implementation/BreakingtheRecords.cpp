#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int lar=s[0], sml=s[0],l_c=0,s_c=0;
    for(int i=1;i<s.size();i++){
        if(s[i]>lar){
            lar=s[i];
            l_c++;
        }
        if(s[i]<sml){
            sml=s[i];
            s_c++;
        }
    }
    return {l_c, s_c};
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}