#include <iostream>
using namespace std;
#include <vector>
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i =0;i<n;i++){
            cin>>arr[i];
        }
        ll i = 0;
        ll j = n-1;
        ll maximum = 0;
        if(i==j){

        
        cout<<0<<'\n';
        continue;
        }
        while(i<j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }
            else if(arr[i]>arr[j]){
               ll temp = arr[i]-arr[j];
               if((arr[i]%temp ==arr[j]%temp)&&(arr[i]%maximum == arr[j]%maximum)){
               maximum = max(temp,maximum);
               }
               else
               maximum = temp;
               i++;
               j--;
            }
            else{
               ll temp = arr[j]- arr[i];
               if((arr[i]%temp ==arr[j]%temp) && (arr[i]%maximum == arr[j]%maximum)){
               maximum = max(temp,maximum);
               }
               else
               maximum = temp;
               i++;
               j--;
            }
        }
        cout<<maximum<<'\n';
    }
}