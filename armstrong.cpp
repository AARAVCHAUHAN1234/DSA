#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int num=345;
    int ans=0;
    int n=num;
    int t=0;
    while(num!=0){
        t++;
        num/=10;
    }
    cout<<t<<endl;
    while(n!=0){
        // cout<<ans<<endl;
        ans=ans+round(pow(n%10,t)); //pow return double value.
        // cout<<ans<<endl;
        n/=10;
    }
    cout<<ans;
}