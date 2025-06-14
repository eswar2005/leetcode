class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%3;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                operations++;
            }
            //operations+=min(nums[i],3-nums[i]);
        }
        return operations;
        
    }
};