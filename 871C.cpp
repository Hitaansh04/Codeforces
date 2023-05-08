#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int f(string s){
    
    int ans = (s[0] - '0')*2 + (s[1]-'0')*1;
    return ans;
     
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[4];
        for(int i = 0;i<4;i++){
            arr[i] = 5000000;
        }

        for(int i = 0;i<n;i++){
        int m;
        cin>>m;
        string s;
        cin>>s;
        int value = f(s);
        arr[value] = min(arr[value],m);
    
        }
        if((arr[2] == 5000000|| arr[1] == 5000000) && (arr[3]==5000000))
        cout<<-1<<endl;
        else
         cout<<min(arr[3],arr[1]+arr[2])<<endl;
    }
}