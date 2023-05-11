#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
typedef long long ll ; 
void solve(){
int n;
cin>>n;
vector <ll> tea;
vector <ll> capacity;
for(int i = 0;i<n;i++){
    ll temp;
    cin>>temp;
    tea.push_back(temp);
}
for(int i = 0;i<n;i++){
    ll temp;
    cin>>temp;
    capacity.push_back(temp);
}
vector <ll> ans(n,0);
vector <ll> sum(n + 1);
for (int i = 0; i < n; ++i) sum[i + 1] = sum[i] + capacity[i];
vector<ll> cnt(n + 1), add(n + 1);
for (int i = 0; i < n; ++i) {
      int j = upper_bound(sum.begin(), sum.end(), tea[i] + sum[i]) - sum.begin() - 1;
      cnt[i] += 1;
      cnt[j] -= 1;
      add[j] += tea[i] - sum[j] + sum[i];
    }


for (int i = 0; i < n; ++i) {
      cout << cnt[i] * capacity[i] + add[i] << ' ';
      cnt[i + 1] += cnt[i];   
    }
    cout << '\n';
}




int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}