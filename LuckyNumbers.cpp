#include <iostream>
using namespace std;
#include <vector>
int f(int a) {
    string s = to_string(a);
    int mn = 10, mx = -1;
    for (int i = 0; i < s.size(); i++) {
        mn = min(mn, int(s[i] - '0'));
        mx = max(mx, int(s[i] - '0'));
    }
    return mx - mn;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans = l;
        int ans_dif = f(l);
        for (int i = l + 1; i <= min(r, l + 100); i++) {
            if (ans_dif < f(i)) {
                ans_dif = f(i);
                ans = i;
            }
        }
        cout << ans << '\n';
    }
}