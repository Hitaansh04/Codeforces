#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod = 1e9+7;
const int N = 1e6+8;
vector<bool>isprime(N, true);

ll bin_expo(ll a, ll b)
{
    ll ans = 1;
    while(b > 0)
    {
        if(b & 1)
        {
            ans = ((ans % mod) * (a % mod)) % mod;
            b--;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b >>= 1;
    }
    return ans % mod;
}

ll factorial(ll n)
{
    if(n <= 1) return 1;
    ll ans = 1;
    while(n > 1)
    {
        ans = (((ans)%mod) * ((n)%mod)) % mod;
        n--;
    }
    return (ans % mod);
}

void sort(vector<ll>&v)
{
    sort(v.begin(), v.end());
}

void rsort(vector<ll>&v)
{
    sort(v.begin(), v.end(), greater<int>());
}

ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}

ll add(ll a, ll b)
{
    return ((a % mod) + (b % mod)) % mod;
}

ll sub(ll a, ll b)
{
    return ((a % mod) - (b % mod)) % mod;
}

ll hcf(ll a, ll b)
{
    return ((a * b) / (__gcd(a,b)));
}

void sieve_of_eratosthenes()
{
    isprime[0] = isprime[1] = false;
    for(int i = 2; i<=N; i++)
    {
        if(isprime[i] == true)
        {
            for(int j = 2*i; j<=N; j+=i)
            {
                isprime[j] = false;
            }
        }
    }
}

void print(vector<ll>&v)
{
    for(auto it : v) cout<<it<<" ";
    cout<<endl;
}

bool ispal(string s)
{
    if(s.size() == 1) return true;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}

ll count(ll n, ll val, ll sum)
{
    if(val == sum) return 1;
    if(val > sum) return 0;
    
    if(n < 0) return 0;
    
    ll notpick = count(n-1, val, sum);
    ll pick = 0;    
    if(n + val <= sum) 
    {
        pick = count(n-1, val + n, sum);
    }
    return pick + notpick;
}

ll bs_sqrt(ll x) 
{
    ll left = 0, right = 2000000123;
    while (right > left) {
        ll mid = (left + right) / 2;
        
        if (mid * mid > x) right = mid;
        else left = mid + 1;
    }
    return left - 1;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
}
