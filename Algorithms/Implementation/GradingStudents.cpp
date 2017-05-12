#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    int temp;
    vector<int> sol(grades.size());
    for(int i=0;i<grades.size();i++){
        temp = (grades[i]%10 <=5)?(grades[i]/10)*10+5:(grades[i]/10)*10+10;
        if(grades[i]<38)
            sol[i]=grades[i];
        else if(temp-grades[i]<3)
            sol[i]=temp;
        else
            sol[i]=grades[i];
    }
    return sol;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
