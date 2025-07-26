class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sum2=0;
        for(int i=0;i<n;i++){
            if((sum-sum2-nums[i])==sum2){
                return i;
            }
             sum2+=nums[i];
        }
        return -1;
    }
};