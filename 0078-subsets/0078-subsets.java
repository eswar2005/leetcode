class Solution {
    public void dfs(List<List<Integer>> ans,List<Integer> dummy, int indx,int[] nums){
        if(indx>=nums.length){
            ans.add(new ArrayList(dummy));
            return;
        }
        dummy.add(nums[indx]);
        dfs(ans,dummy,indx+1,nums);
        dummy.remove(dummy.size()-1);
        dfs(ans,dummy,indx+1,nums);
    }
    List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> dummy = new ArrayList<>();
        dfs(ans,dummy,0,nums);
        return ans;
    }
}