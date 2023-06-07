#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin.tie(0)->sync_with_stdio(false);
        int x,k;
        cin>>x>>k;
        

   
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;    
        continue;;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;  
    }
    }
}