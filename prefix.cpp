#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    // vector<int> pre; do not run because no memory allocated.
    vector<int> pre(v.size());
    pre[0]=v[0];
    for(int i=1;i<v.size();i++){
        pre[i]=pre[i-1]+v[i];
    }
    for(int i=0;i<pre.size();i++){
        cout<<pre[i]<<" ";
    }
}
