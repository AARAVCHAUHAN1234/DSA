#include <bits/stdc++.h>
using namespace std;
int main(){
    //lec 15
    //convert a to A
    char s[]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        s[i]=s[i]-32;
    }
    for(int i=0;i<5;i++){
        cout<<s[i];
    }
}