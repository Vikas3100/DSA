#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:

    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this-> size = size;
        top = -1;
    }

    void push(int data){
        if(size-top >1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int getTop(){
         if(top==-1){
            cout<<"Stack Empty"<<endl;
         }
         else{
            return arr[top];
         }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    while(!st.isEmpty()){
        cout<<st.getTop()<<endl;
        st.pop();
    }
    return 0;
}