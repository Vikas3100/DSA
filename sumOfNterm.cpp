#include<bits/stdc++.h>
using namespace std;
void sumOfNterm(int i, int sum){
    if( i<1){
        cout<<sum;
        return;
    }
    sumOfNterm(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    sumOfNterm(n,0);
}