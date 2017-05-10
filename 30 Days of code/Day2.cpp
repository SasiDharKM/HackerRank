#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double base;
    int tip,tax;
    cin>>base>>tip>>tax;
    cout<<"The total meal cost is "<<int(base+(base*tip/100)+(base*tax/100))<<" dollars.";
    return 0;
}