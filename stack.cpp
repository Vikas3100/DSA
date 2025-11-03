// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "vikas";
//     stack<char>s;
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         s.push(ch);
//     }
//     string ans="";
//     while(!s.empty()){
//         char ch=s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout<<ans<<endl;

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    st.push(5);

    cout<<"Topmost element:"<<st.top()<<endl;

    st.pop();
    st.pop();

    cout<<"Topmost element:"<<st.top()<<endl;
    st.pop();
    
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}