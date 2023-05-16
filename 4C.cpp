#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    map<string,int> hash;
    while(n--){
        string s;
        cin>>s;
        if(hash.count(s)>0){
            cout<<s+to_string(hash[s])<<endl;
            hash[s]++;
        }
        else{
        hash[s]=1;
        cout<<"OK"<<endl;
        }
    }
}