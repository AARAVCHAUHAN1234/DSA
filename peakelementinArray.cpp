#include <bits/stdc++.h>
using namespace std;
int main(){
        int low=0;
        vector<int>arr={1,2,4,5,3,2};
        int high=arr.size()-1;
        
        int mid,max;
        while(low<=high){
            mid=high+(low-high)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
               max=mid;
                break;
            
            }
            else if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return max;
        
}