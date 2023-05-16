#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(vector <ll> ing , vector<ll> grams , ll mid,int n,ll k){
    for(int i =0;i<n;i++){
       if((grams[i]/ing[i]<mid)){
          k = k - (mid*ing[i]- grams[i]);
          if(k<0)
          return false;
       }
    }
    
    return true;
}
int main(){
    cin.tie(0)->sync_with_stdio(false);
    ll n,k,sum=0;
    cin>>n>>k;
    vector <ll> ing(n);
    vector <ll> grams(n);

    for(int i =0;i<n;i++){
          cin>>ing[i];
    }
    for(int i =0;i<n;i++){
          cin>>grams[i];
          sum+=grams[i];
    }
    ll l = 0,r = k+sum;
    ll ans = 0;
    while(l<=r){
        ll mid = (l+r)/2;
        if(check(ing,grams,mid,n,k)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }

    }

   cout<<ans;

}