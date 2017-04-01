using namespace std;


int main(){
    int n,sum1=0,sum2=0,dif;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int i=0;i<n;i++)
       {sum1+=a[i][i];
    sum2+=a[n-1-i][i];}
    dif=abs(sum1-sum2);
    cout<<dif;
    
        
    return 0;
}
