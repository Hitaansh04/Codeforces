#include <iostream>
#include <vector>
using namespace std;
#include <string>

bool isPalindrome(string str)
{
    
    int n = str.size();
    for (int i=0; i < n/2; i++)
        if (str.at(i) != str.at(n-i-1))
            return false;
 
    
    return true;
}
void solve(){
   string str;
   cin>>str;
   int n = str.size();
    char ch = str.at(0);
 
    int i = 1;
    for (i=1; i<n; i++)
        if (str.at(i) != ch)
            break;
 
    
    if (i == n){
    cout<<-1<<endl;
    return ;
    }
 
    
    if (isPalindrome(str))
    cout<<n-1<<endl;
    else 
    cout<<n<<endl;   
}


int main() {
    cin.tie(0)->sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}