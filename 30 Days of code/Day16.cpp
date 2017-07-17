using namespace std;


int main(){
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