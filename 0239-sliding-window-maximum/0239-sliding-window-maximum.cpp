class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        int n=nums.size();
        // first k elements
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        //for next windows
        for(int i=k;i<n;i++){
            ans.push_back(nums[dq.front()]);
            //remove not a part of curr window
            while(dq.size() && dq.front()<=i-k){
                dq.pop_front();
            }
            //remove smaller values for the window
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};