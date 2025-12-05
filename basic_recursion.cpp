// #include<iostream>
// using namespace std;
// int fun(int i, int sum){
//     if(i<1){
//         return sum;
//     }
//     fun(--i,sum+i);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=fun(n,0);
//     cout<<ans;
// }
#include<bits/stdc++.h>
using namespace std;
// void functionName(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"Vikas"<<endl;
//     functionName(i+1,n++);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     functionName(1,n);
// }
// void rev( int n){
//     if(n==0){
//         return;
//     }
//     cout<<n;
//     rev(--n);
// }
// int main(){
//     int n;
//     cin>>n;
//     rev(n);
// }
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    return n + fun(n-1);

}
int main(){
    int n =5;
    cout<<fun(n);
}