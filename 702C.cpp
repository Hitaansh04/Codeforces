#include <bits/stdc++.h>
using namespace std;

using ll = long long;
/* ll check(ll input , vector<ll> tower,int m){
    int l = 0;
    int r = m;
    int mid = 0;
    ll result = INT_MAX;
    while(l<=r){
        mid  = (l+r)/2;
        
        if(tower[mid]==input)
        return 0ll;
         if(tower[mid]>input){
            r = mid-1;
         }
         else{
            l = mid+1;
         }
         result = min(result,abs(input - tower[mid]));
         
    }
    
    return result;
} */

int main(){
    cin.tie(0)->sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector <ll> city(n);
    vector <ll> tower(m);
    for(int i = 0;i<n;i++){
        cin>>city[i];
    }
    for(int i = 0;i<m;i++){
        cin>>tower[i];
    }
    
    ll r = 0;
    for (int i=0,p=0; i<n; i++){ 
		while(abs(tower[p]-city[i]) >= abs(tower[p+1]-city[i]) && p<m-1) ++p;
		r=max(r,abs(tower[p]-city[i])); 
	}
	
	cout<<r;


}