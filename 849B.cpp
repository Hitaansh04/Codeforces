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
        int x = 0;
        int y  = 0;
        bool flag = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='L')
            x-=1;
            else if(s[i]=='R')
            x+=1;
            else if(s[i]=='U')
            y+=1;
            else
            y-=1;
            if(x==1 && y==1)
            {
            flag = 1;
            cout<<"YES"<<'\n';
            break;
            }
        }


        if(flag==0)
        cout<<"NO"<<'\n';
    }
}