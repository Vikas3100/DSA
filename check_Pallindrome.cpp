#include<bits/stdc++.h>
using namespace std;

    bool isPalindrome(string s) {
        string filter;
        for(auto c:s){
            if(isalnum(c)){
            filter += tolower(c);
            }
        }
        int i=0;
        int j=filter.size()-1;
        while(i<j){
            if(filter[i]==filter[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
          }
        return true;
    }

int main(){ 
        string s;
        cin>>s;
        if(isPalindrome(s)){
            cout<<"Pallindrome";
        }
        else{
            cout<<"Not-Pallindrome";
        }
}