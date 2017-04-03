#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    if(time[time.length()-2] == 'P'){
        if(time[1]=='2' && time[0]!='0') {}
          else{
            time[0]= int(time[0])+1;
            time[1]= int(time[1])+2;}
    }
    else if (time[time.length()-2] == 'A'){
        if(time[1]=='2' && time[0]!='0') {
            time[0]= '0';
            time[1]= '0';
        }
    }
    for(int i =0; i< time.length()-2;i++){
        cout<<time[i];
    }
    return 0;
}
