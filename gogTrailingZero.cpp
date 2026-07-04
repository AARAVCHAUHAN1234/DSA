class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        int sum=0;
    while(n>=5){
        sum=sum+n/5;
        n/=5;
    }
    return sum;
    }
};