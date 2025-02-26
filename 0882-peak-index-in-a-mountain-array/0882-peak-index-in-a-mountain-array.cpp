class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int ans=-1;
        int maxarray=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxarray){
                maxarray=arr[i];
                ans=i;
            }
        }
        return ans;
    }
};