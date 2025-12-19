#include<bits/stdc++.h>
using namespace std;
    int countOperations(int num1, int num2) {



        int m;
        int count=0;
        while(num1 && num2){
            if(num1>=num2){
                num1 = num1-num2;
            }
            else{
                num2 = num2-num1;
            }
            count++;
        }
    return count;
}
// hfuigheiofor
int main(){ 
    int num1,num2;
    cin>>num1;
    cin>>num2;
    int n;
    cout<<countOperations(num1,num2);
}