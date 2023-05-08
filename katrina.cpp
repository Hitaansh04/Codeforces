#include<iostream>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        long long int s[a+1];
        for(int i=0;i<a;i++)cin>>s[i];
        sort(s,s+a);
       long long int l=s[a-1]*s[a-2];
        long long int k=s[0]*s[1];
        long long int p=max(k,l);
        cout<<p<<endl;
    }
}