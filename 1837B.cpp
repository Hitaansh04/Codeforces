#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int res = 0;
        int cnt = 1;
        int i = 0;
        while(i < n - 1) {
            while(i < n - 1 && (s[i] == s[i + 1])) {
                cnt++;
                i++;
            }
            res = max(res, cnt);
            cnt = 1;
            i++;
        }
        res = max(res, cnt);
        cout << res+1 << endl;
    }
}