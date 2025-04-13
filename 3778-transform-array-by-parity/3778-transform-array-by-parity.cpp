class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[j]=0;
                j++;
            }
            else{
                nums[j]=1;
                j++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};