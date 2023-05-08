#include <iostream>
using namespace std;
#include <vector>
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int a[3];
        int i =0;
        while(i<3){
            cin>>a[i];
            i++;
        }
        if(a[2]==(a[0]+a[1]))
        cout<<'+'<<endl;
        else
        cout<<'-'<<endl;

    }
}