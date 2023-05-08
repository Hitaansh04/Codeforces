#include <iostream>
using namespace std;
#include <vector>


int solution(vector<int> length , vector<int> ent, int t,int n ){
    int max = 0;
    int index = -1;
    for(int i = 0;i<n;i++){
        if((length[i])<=t-i){
            if(ent[i]>max){
                max = ent[i];
                index = i;
            }
            
        }

    }
    if(index>=0)
    return index+1;
    else
    return -1;

}
int main(){
    int q;
    cin>>q;
    for(int i = 0 ;i<q;i++){
        int n,t;
        cin>>n>>t;
        vector<int> length ;
        vector<int> ent;
        for(int i = 0;i<n;i++){
            int temp ;
            cin>>temp;
            length.push_back(temp);
        }
        for(int i = 0;i<n;i++){
            int temp ;
            cin>>temp;
            ent.push_back(temp);
        }
        int ans = solution(length,ent,t,n);
        cout<<ans<<endl;
    
        
    }
}