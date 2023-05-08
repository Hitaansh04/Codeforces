#include <iostream>
using namespace std;
#include <vector>
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        pair <int,int> A,B;
        A.first = a;
        A.second = b;
        B.first = c;
        B.second = d;
        int moves = 0;
        if(B.second<A.second){
        cout<<-1<<'\n';
        continue;
        }
        while(A.second<B.second){
            A.second++;
            A.first++;
            moves++;
        }
        if(A.first<B.first){
        cout<<-1<<'\n';
        continue;
        }
        else{
            while(A.first>B.first){
                A.first --;
                moves++;
            }
        }
        cout<<moves<<'\n';


    }

}
