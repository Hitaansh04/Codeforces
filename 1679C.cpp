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
    
    int n, t;
    cin>>n>>t;
    set<ll>row, col;
    vector<ll>r(n+1), c(n+1);
    for(ll i = 1; i<=n; i++)
    {
        row.insert(i);
        col.insert(i);
    }
    
    while(t--)
    {
        int a, x, y, x1, y1, x2, y2;
        cin>>a;
        if(a == 1)
        {
            cin>>x>>y;
            r[x]++;
            c[y]++;
            row.erase(x);
            col.erase(y);
        }
        else if(a == 2)
        {
            cin>>x>>y;
            r[x]--;
            c[y]--;
            if(r[x] == 0) row.insert(x);
            if(c[y] == 0) col.insert(y);
        }
        else
        {
            cin>>x1>>y1>>x2>>y2;
            int xz = n+2, yx = n+2;
            if(row.lower_bound(x1) != row.end())
            {
                xz = *row.lower_bound(x1);
            }
            if(col.lower_bound(y1) != col.end())
            {
                yx = *col.lower_bound(y1);
            }
            if(xz > x2 or yx > y2) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
