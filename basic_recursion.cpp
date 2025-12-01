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
void rev( int n){
    if(n==0){
        return;
    }
    cout<<n;
    rev(--n);
}
int main(){
    int n;
    cin>>n;
    rev(n);
}