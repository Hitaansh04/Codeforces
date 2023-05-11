#include <iostream>
using namespace std;
#include <string>
void solve(){
    int n;
    cin>>n;
string s;
cin>>s;
int ans = n + 1;
        for (int c = 0; c < 26; ++c) {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++, r--;
                }
                else if (s[l] == char('a' + c)) {
                    cnt++, l++;
                }
                else if (s[r] == char('a' + c)) {
                    cnt++, r--;
                }
                else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1) ans = -1;
        cout << ans << '\n';
    }
    





int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}