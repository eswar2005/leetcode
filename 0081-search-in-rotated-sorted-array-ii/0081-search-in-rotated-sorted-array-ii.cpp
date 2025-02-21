class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int ,int > mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto s:mp){
            if(s.first==target){
                if(s.second>0){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};