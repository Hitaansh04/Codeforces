#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{   
    
    long long t;
    cin>>t;
    while(t--) {
         vector <int> nums(3,-1);
         
         for(int i = 0;i<3;i++){
            cin>>nums[i];
         }
         sort(nums.begin(),nums.end());
         cout<<nums[1]<<'\n';

    }
    
}