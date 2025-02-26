class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int cnt=0;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]!=0) prod*=nums[i];
            if(nums[i]==0){
                cnt++;
            }
        }
        if(cnt>1){
            return ans;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[i]=prod;
            }
            if(cnt==0){
                ans[i]=prod/nums[i];
            }
        }
        return ans;
    }
};