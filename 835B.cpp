#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{   
    
    long long t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maximum = 0;
        for(int i =0;i<n;i++){
            maximum = max(maximum,int(s[i]-'a'));
        }
        cout<<maximum+1<<'\n';

    }
}