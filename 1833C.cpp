#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> nums(n);
        int odd = 0,even = 0;
        int evenmin = INT_MAX,oddmin = INT_MAX;
        for(int i = 0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp%2){
            odd++;
            oddmin = min(oddmin,temp);
            }
            else{
            even++;
            evenmin = min(evenmin,temp);
            }
            
            nums[i] = temp;
        }
        if(abs(odd-even)==n)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(evenmin>oddmin){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    
    }
}