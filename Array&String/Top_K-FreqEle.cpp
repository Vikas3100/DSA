#include<bits/stdc++.h>
using namespace std;
vector<int> topKelement(vector<int>&nums, int k){
    unordered_map<int,int>freq;
    for(auto ele : nums){
        freq[ele]++;
    }
    priority_queue<pair<int,int>>pq;
    for( auto it: freq){
        pq.push({it.second, it.first});
    }
    vector<int>result;
    while(k--){
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}
int main(){
    vector<int>nums ={1,1,1,2,2,3};
    int k =2;
    vector<int>ans = topKelement(nums,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}