#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,long int> pb;
    int n;
    long int no;
    string name;
    cin>>n;
    while(n--){
        cin>>name>>no;
        pb.insert(pair<string,long int>(name,no));
    }
    while(cin>>name){
        if(pb.find(name)!=pb.end())
            cout<<name<<"="<<pb.find(name)->second<<endl;
        else
            cout <<"Not found"<<endl;
        
    }
    return 0;
}
