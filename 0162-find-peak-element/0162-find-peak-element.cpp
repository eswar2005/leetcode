class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int find=-1;
        int high=n-1;
        while(high<n){
            int mid=(low+high)/2;
            bool leftOk = (mid == 0) || (nums[mid - 1] < nums[mid]);
            bool rightOk = (mid == n - 1) || (nums[mid] > nums[mid + 1]);
            if(leftOk && rightOk){
                find=mid;
                break;
            }
            else if(!rightOk){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return find;
    }
};