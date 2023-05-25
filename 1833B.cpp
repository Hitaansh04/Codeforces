#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector <ll> a(n);
        vector <ll> b(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }
       sort(b.begin(),b.end());
       vector <ll> c(n);
       for(int i =0;i<n;i++){
       std::vector<ll>::iterator low = lower_bound(b.begin(),b.end(),a[i]-k);
       std::vector<ll>::iterator low2 = low;
       ll diff = *low - a[i];
       while((*low - a[i] )<=2*k){
          
          if(diff >(*low - a[i])){
            low2 = low;
          }
          low++;
       }
            c[i] = *low2;
            b.erase(low2);
        

       }
       for(int i = 0;i<n;i++){
        cout<<c[i]<<" ";
       }
       cout<<endl;

    }
}