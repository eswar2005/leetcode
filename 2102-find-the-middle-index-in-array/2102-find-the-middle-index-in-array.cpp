class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sums=0;
        for(int i=0; i<nums.size();i++){
            sums+=nums[i];
        }
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            if(curr_sum==sums-curr_sum-nums[i]){
                return i;
            }
            curr_sum+=nums[i];
           
            
        }
        return -1;
    }
};