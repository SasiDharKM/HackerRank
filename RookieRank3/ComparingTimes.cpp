#include <bits/stdc++.h>

using namespace std;

string timeCompare(string t1, string t2){
    // Complete this function
   
    if (t1[5]==t2[5]){
        if(t1[0]=='1' && t1[1]=='2'){
            t1[0]='0';
            t1[1]='0';
        }
        if(t2[0]=='1' && t2[1]=='2'){
            t2[0]='0';
            t2[1]='0';
        }
        int th1=(int(t1[0])-48)*10+int(t1[1])-48;
        int th2=(int(t2[0])-48)*10+int(t2[1])-48;
        int tm1=(int(t1[3])-48)*10+int(t1[4])-48;
        int tm2=(int(t2[3])-48)*10+int(t2[4])-48;
        if((th1*100+tm1)<=(th2*100+tm2))
            return "First";
        else
            return "Second";
    }
    else if (t1[5]=='A' && t2[5]=='P')
        return "First";
    else 
        return "Second";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string t1;
        string t2;
        cin >> t1 >> t2;
        string result = timeCompare(t1, t2);
        cout << result << endl;
    }
    return 0;
}
