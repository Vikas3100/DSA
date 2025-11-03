#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1=-1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack Overflow in stack1"<<endl;
        }else{
            top1++;
            arr[top1]=data;
        }
    }
    void push2(int data){
        if(top2-top1==1){
           
            cout<<"Stack Overflow in stack2"<<endl;
        }
        else{
             top2--;
            arr[top2]=data;
        }
    }
    
    void pop1(){
        if(top1==-1){
            cout<<"Stack Underflow in stack1"<<endl;
        }else{
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack Underflow in stack2"<<endl;
        }else{
            top2++;
        }
    }
};