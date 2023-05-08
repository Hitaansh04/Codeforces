#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <set>
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (n == 1) {
    cout << "YES\n";
    continue;
  }
  bool flag = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i%2 and j%2==0) {
        if (s[i] == s[j]) flag = false;
      } else if (j%2 and i%2==0) {
        if (s[i] == s[j]) flag = false;
      }
    }
  }
        if(flag)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n' ;
    }
    return 0;
}
