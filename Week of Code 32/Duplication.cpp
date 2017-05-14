#include <bits/stdc++.h>

using namespace std;

string comp(string s){
    string t;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            t.append("1");
        else 
            t.append("0");
    }
    return t;
}
string series(){
    string t ="0";
    for(int i=0; i<10; i++){
        t+=comp(t);
    }
    return t;
}

int main() {
    int q,x;
    cin >> q;
    string ar=series();
    
    for(int a0 = 0; a0 < q; a0++){    
        cin >> x;
        cout <<ar[x] << endl;
    }
    return 0;
}