class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for( auto s: ans){
            if(s.second%2!=0){
                return false;
            }
        }
        return true;
    }
};