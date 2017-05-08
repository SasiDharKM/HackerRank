using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
    }
    int large=height[0], count=1;
    for(int i=1;i<n;i++){
        if(height[i]>large){
            large=height[i];
            count =0;
        }
        if(height[i] == large)
            count++;
    }
    cout<<count;
    return 0;
}
