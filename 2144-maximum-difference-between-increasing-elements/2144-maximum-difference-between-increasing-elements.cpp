class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxs=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j){
                    maxs=max(maxs,(nums[j]-nums[i]));
                }
            }
        }
        if(maxs==0)return -1;
        return maxs;
    }
};