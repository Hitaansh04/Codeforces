#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        p[a] = i;
    }
    int x = n / 2;
    while (x && p[x] < p[x + 1] && p[n - x + 1] > p[n - x]) x--;
    cout << x << '\n';
}
 
int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}