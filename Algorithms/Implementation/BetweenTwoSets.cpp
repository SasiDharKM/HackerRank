#include <bits/stdc++.h>

using namespace std;

int ma(vector <int> a){
    int l = a[0];
    for(int i = 1;i<a.size();i++)
        if(l < a[i])
            l=a[i];
    return l;
}
int mi(vector <int> a){
    int m = a[0];
    for(int i = 1;i<a.size();i++)
        if(m > a[i])
            m=a[i];
    return m;
}
int getTotalX(vector < int > a, vector < int > b){
    int st=ma(a);
    int end =mi(b);
    int flag =0,flag1=0,count=0;
    for(int i=st; i<=end;i+=st){
        for(int j=0;j<a.size();j++){
            if(i%a[j]==0)
                flag =1;
            else{
                flag=0;
                break;
            }
          }
        if(flag==1){
            flag1=1;
        }
        for(int k=0;k<b.size();k++){
            if(b[k]%i==0)
                flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag==1 &&flag1==1){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}