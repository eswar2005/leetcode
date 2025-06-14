class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        int st=0;
        int end=n-1;
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
                if(nums[st]>nums[end]){
                    ans[i]=nums[st];
                    st++;
                }
                else{
                    ans[i]=nums[end];
                    end--;
                }
        }
        return ans;
    }
};