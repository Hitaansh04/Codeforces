#include <iostream>
#include <vector>
using namespace std;

void recursion(int n,int m , bool & ans){
   
   if(n == m)
   ans = true; 
   if(n<m)
   return;
   
   recursion(n/3,m,ans);
   recursion(2*n/3 , m,ans);
}

int main(){
    int t = 1;
    cin >> t;
    while (t--) {
    int n,m;
    cin>>n>>m;
    if(n==m==1){
        cout<<"YES"<<'\n';
        continue;
    }

    if(m>n || n%3!=0){
        cout<<"NO"<<'\n';
        continue;
    }
    
    bool ans = false ; 
    recursion(n,m,ans);
    if(ans == true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    }
}