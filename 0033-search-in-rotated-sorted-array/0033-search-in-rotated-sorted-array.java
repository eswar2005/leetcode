class Solution {
    public int search(int[] nums, int target) {
        boolean s=false;
        int a=0;
        int k=nums.length;
        for(int i=0;i<k;i++){
            if(nums[i]==target){
                s=true;
                a=i;
            }
        }
        if(s==true){
            return a;
        }
            return -1;
        
    }
}