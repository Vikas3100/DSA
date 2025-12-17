#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums){
    int n=nums.size();
    int maxi =0;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}
int main(){
    vector<int>nums={1,0,0,1,1,1,1,1};
    int ans = maxConsecutiveOnes(nums);
    cout<<"Maximum Consecutive Ones "<<ans;

}