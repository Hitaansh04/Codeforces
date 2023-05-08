#include <iostream>
using namespace std;
#include <string>
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        
        int i=0;
        while(i<l/2){
            
            int check = int(s[i]-'0')*int(s[l-i-1]-'0');
            if(check == 0 && s[i]!=s[l-i-1])
            {
                i++;
                continue;
            }
            else
           {
           break;
           }  
         
        }
        
        cout<<(l-2*i)<<endl;

       
    }
    
}