#include<bits/stdc++.h>

using namespace std;
#define mx 200000

int scores[mx+1];

int alice[mx+1];


int main(){
   int n;
    int rank[mx +1];
    cin >> n;
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    rank[0] =1;
    int cr = rank[0];
    for(int i =1;i<n;i++){
        if(scores[i] <scores[i-1])
            cr+=1;
        rank[i] = cr;
    }
    int m;
    int pt =n;
    cin >> m;
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    for (int i =0; i< m;i++){
        int curr;
        while(pt>=0 && alice[i] > scores[pt])
            pt--;
        if (pt == -1)
            curr = 1;
        else if(alice[i] == scores[pt])
            curr = rank[pt];
        else if(alice[i] < scores[pt])
            curr = rank[pt] + 1;
        cout << curr <<endl;
    }
 
 
    return 0;
}
