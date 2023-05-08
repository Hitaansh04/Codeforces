#include <bits/stdc++.h>
 
 
using namespace std;
 
typedef vector<int> vi;
 
 
int main(){
    int N;
    cin >> N;
    while (N--){
        int m;
        cin >> m;
        vector<vi> a;
        set<int> sett;
        for (int i = 0; i < m; ++i){
            int n;
            cin >> n;
            vi tmp(n);
            for (int i = 0; i < n; ++i) cin >> tmp[i];
            a.push_back(tmp);
        }
        vi ans(m, -1);
        int flag = 0;    //flag == 1 equal to no winner
        for (int i = m - 1; i > -1; --i){
            for (int j = 0; j < a[i].size(); ++j){
                if (sett.count(a[i][j])) continue;   
                sett.insert(a[i][j]);
                ans[i] = a[i][j];
            }
            if (ans[i] == -1) {flag = 1; break;}    // no winner 
        }
        if (flag) cout << -1;
        else {for (auto x: ans) cout << x << " ";}
        cout << endl;
    }
    return 0;
}