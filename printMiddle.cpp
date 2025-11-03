#include<bits/stdc++.h>
using namespace std;
void printMiddle(stack<int>&s, int totalsize){
    if(s.size()==0){
        cout<<"Stack Empty"<<endl;
    }
    if(s.size() == totalsize/2 + 1){
        cout<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();

    printMiddle(s,totalsize);
    s.push(temp);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    printMiddle(st , st.size());
}