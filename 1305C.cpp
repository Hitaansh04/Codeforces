#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>

using namespace std;

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

#define loop(x,n) for(ll x = 0; x < n; ++x)

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}

#define DEBUG

int main(){
#ifndef DEBUG
	#define endl "\n"
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#endif
	ll n , m;
    cin >> n >> m;
    vector<ll> seq(n);
    loop(i,n){cin >> seq[i];}
    if ( n > m ){
        cout << 0 << endl;
        return 0;
    }
    sort(seq.begin(),seq.end());
    ll prod = 1;
    loop(i,n){
        for (ll j=i+1; j< n ; j++){
            prod *= seq[j]-seq[i];
            prod %= m;
        }
    }
    cout << prod << endl;
    return 0;
}
