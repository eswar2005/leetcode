class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sums=0;
        int sumOfN= n*(n+1)/2;
        for(int i=0;i<n;i++){
            sums=sums+nums[i];
        }
        return sumOfN-sums;
    }
};