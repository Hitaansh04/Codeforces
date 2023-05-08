#include <iostream>
#include <vector>

using namespace std;
void solve(){
    string s;
    cin>>s;
    string s1 = "codeforces";
    int calc = 0;
    for(int i=0;i<10;i++){
      if(s[i]==s1[i])
      continue;
      else
      calc++;
    }
    cout<<calc<<endl;
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}