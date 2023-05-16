#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#define ll long long
void solve(){
    int n;
    cin>>n;
    ll a[n];
        
    vector<pair<ll, ll > > b;
        
    for(int i=0; i<n; i++)
    {
            cin>>a[i];
    }
        
    sort(a, a+n);
    reverse(a, a+n);
    for(int i = 0;i<n;){
        int j = i;
        while(i<n && a[j]==a[i])
        i++;
        b.push_back({a[j],i-j});
    }
    int ans = 0;
    ans += b[0].second;
    for(int i = 1;i<b.size();i++){
        if(b[i].first+1 ==b[i-1].first){
            ans+=max((b[i].second - b[i-1].second),0ll);
        }
        else{
            ans+= b[i].second;
        }
    }
    cout<<ans<<endl;

}


int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}