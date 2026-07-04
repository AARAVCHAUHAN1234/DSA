#include <bits/stdc++.h>
using namespace std;

int main(){
    //finding first occurece
    int arr[]={2,3,3,3,3,4};
    int low=0;
    int target=3;
    int first=-1;
    int last=-1;
    int high=6-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
low=0;
target=3;
last=-1;
high=6-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<last-first+1<<endl;

}