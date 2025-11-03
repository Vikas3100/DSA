#include<bits/stdc++.h>
using namespace std;
bool CheckAnagram(string s , string t){
    if(s.size()!=t.size()){
        return false;
    }
    vector<int>count(26,0);
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i=0;i<count.size();i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s,t;
    cout<<"string 1 :"; 
    cin>>s;
    cout<<"string 2 :";
    cin>>t;
    if(CheckAnagram(s,t)){
        cout<<"Valid Anagram";
    }
    else{
        cout<<"Invalid Anagram";
    }

}