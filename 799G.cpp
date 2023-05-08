#include <iostream>
#include <vector>
using namespace std;
#include <cmath>

void solve(){
    int n,k;
    cin>>n>>k;
    vector <int> nums;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    int l=0,r=0;
    int count = 0;
    int correct = 0;
    int total = 0;
    while(l<n-k){
        r = l;

    while(count<k){
        
         if((pow(2,count)*nums[r])< (pow(2,count+1)*nums[r+1])){
            correct++;
            r++;
         }
         count++;
    }
     if(correct==k){
     total+=1;
     }
     correct =0;
     count = 0;
     l++;
    
    }
    cout<<total<<endl;
    return ;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}