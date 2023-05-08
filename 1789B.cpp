#include <iostream>
using namespace std;
#include <string>
int main()
{   
    
    long long t;
    cin>>t;
    while(t--) {
        long long n, l = -1, r, f=0;
        string str;
        cin>>n;
        cin>>str;
        
        for(int i = 0 ; i < (n/2) ; i++) {
            if(str[i] != str[n-i-1]) {
                if(l == -1)
                    l = i;
                r = i;
            }
        }
        
        if(l!=-1) {
            for(int i = l; i <= r; i++) {
                str[i] = (str[i] == '1')? '0':'1';
            }
        }
        
        for(int i = 0 ; i < (n/2) ; i++) {
            if(str[i] != str[n-i-1]) {
                f=1;
                break;
            }
        }
        (f ==1)? cout<<"NO" : cout<<"YES"; 
        cout<<endl;
    }
 
    return 0;     
 }