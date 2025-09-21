class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=0;
        int m=0;
        int first=0;
        int curr_sum=0;
        int last=nums.size()-1;
        while(first<last){
            curr_sum=nums[first]+nums[last];
            if(curr_sum==target){
                m=first+1;
                k=last+1;
            }
            if(curr_sum>target){
                last--;
            }
            else{
                first++;
            }
            
        }
        return {m,k};
    }
};