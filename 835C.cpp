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
        int arr[n];
        for(int i=0;i<=n-1;i++){
            cin>>arr[i];
        }
        int maxi[n];
        for(int i = 0;i<n;i++){
            int maximum = 0;
            for(int j = 0;j<n;j++){
                if(i==j)
                continue;
                else
                maximum = max(arr[j],maximum);
            }
            maxi[i] = maximum;
        }
        for(int i = 0;i<n;i++){
            cout<<arr[i]-maxi[i]<<" ";
        }
        cout<<endl;
    }
}