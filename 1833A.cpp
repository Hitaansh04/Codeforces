#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);
     int t;
     cin>>t;
     while(t--){
        set <string> str;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i =0;i<n-1;i++){
            string s2 = s.substr(i,2);
            str.insert(s2);
        }
        cout<<str.size()<<endl;
     }
}