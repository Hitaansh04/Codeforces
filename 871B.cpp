#include <iostream>
#include <vector>

using namespace std;
void solve(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maximum = 0;
int sum = 0;
for(int i=0;i<n;i++){
    if(arr[i]==1){
       maximum = max(sum,maximum);
       sum = 0;
       
    }
    else if(arr[i]==0)
    sum++;

}
cout<<max(maximum,sum)<<endl;
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}