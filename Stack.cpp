#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    // creating Constructor
    Stack(int s){
        top=-1;
        size=s;
        int flag=0;
        arr=new int [s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
        top++;
        arr[top]=value;
        flag=1;
        cout<<"Value added"<<" "<<arr[top]<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        } 
        else{            
            cout<<"poped value:"<<arr[top]<<endl;
            top--;
            if(top==-1){
                flag=0;
            }
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        return top==-1;
    }
    int issize(){
        return top+1;
    }

};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.pop();
    int b=s.peek();
    if(s.flag==0){
        cout<<b<<endl;
    }
    cout<<s.isempty()<<endl;
    cout<<s.issize()<<endl;
}