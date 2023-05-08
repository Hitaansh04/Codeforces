#include <iostream>
using namespace std;
#include <vector>
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll evensum=0,oddsum=0;
        for(int i =0;i<n;i++){
        if(arr[i]%2)
        oddsum+=arr[i];
        else
        evensum+=arr[i];
        }
        if(evensum>oddsum)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}