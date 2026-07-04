#include <bits/stdc++.h>
using namespace std;
int main(){
    int total=0;
    int a=3,b=4;
    // bishop movement in 1 direction
    total=min(8-a,b-1);
    //bishop movement in 2 direction
    total=min(8-a,8-b);
    //bishop movement in 3 direction
    total=min(a-1,8-b);
    //bishop movement in 4 direction 
    total=min(a-1,b-1);
    cout<<total;
}