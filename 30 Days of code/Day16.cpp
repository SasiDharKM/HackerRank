

using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string S;
    cin >> S;
    try{
        cout<<stoi(S);
    }
    catch(const invalid_argument& ia){
        cout<<"Bad String";
    }
        
    return 0;
}