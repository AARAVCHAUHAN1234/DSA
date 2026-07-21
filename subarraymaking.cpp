//subarraymaking
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
vector<vector<int>> v;
int n=5;
	int arr[n]={1,2,3,4,5};

	for(int k=0;k<n;k++){
	    for(int j=k;j<=n;j++){
			vector<int> temp;
	        for(int i=k;i<j;i++){
	            // cout<<arr[i]<<" ";
                temp.push_back(arr[i]);
	        }
	       v.push_back(temp); 
	    }
	}
    for (auto &sub : v) {
        for (int x : sub)
            cout << x << " ";
        cout << endl;
    }

}