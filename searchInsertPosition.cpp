#include <bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        bool found=true;
        int mid;
        int ind;
        while(low<=high){
            mid=low+((high-low)/2);
            ind=mid;
            // cout<<mid;
            if(nums[mid]==target){
                found=false;
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
                ind=low;
            }
            else{
                high=mid-1;
            }    
        }
        if(found){
           return (ind<0)? 0: ind;
        }
        else{
            return mid;
        }
    }
    int main(){
        vector<int> v={1,4,5,6,6,7};
        cout<<searchInsert(v,8);

    }

