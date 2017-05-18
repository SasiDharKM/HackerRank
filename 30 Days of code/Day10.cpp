using namespace std;


int main(){
    int n;
    string s,b;
    cin >> n;
    while(n>0){
        if(n%2==1)
            s+="1";
        else
            s+="0";
        n/=2;
    }
    for(int i=s.length()-1;i>=0;i--)
        b+=s[i];
    int count=0,lar=0;
    for(int i=0;i<b.length();i++){
        if(b[i]=='1')
            count++;
        else{
            if(count>lar)
                lar=count;
            count=0;
        }
       }
    if(count>lar)
        lar=count;
    cout<<lar;
    return 0;
}
