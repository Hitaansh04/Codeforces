#include "bits/stdc++.h"
using namespace std;
using ll = long long;
ll summation(ll nums){
    ll sum = 0;
    while(nums>0){
        sum+=nums%10;
        nums/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll> data(n+1,0);
    for(ll i = 1;i<=n;i++){
        cin>>data[i];
    }
    while(q--){
        ll query;
        cin>>query;
        if(query==2){
            ll index;
            cin>>index;
            cout<<data[index]<<endl;;
            continue;
        }
        else{
            ll l,r;
            cin>>l>>r;
            for(ll i = l;i<=r;i++){
                data[i] = summation(data[i]);
            }
        }

    }
        
    }
    

}