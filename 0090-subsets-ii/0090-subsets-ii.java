class Solution {
    public void dfs(List<List<Integer>> ans, List<Integer> dummy,int indx, int[] nums){
        if(indx>=nums.length){
            ans.add(new ArrayList(dummy));
            return;
        }
        dummy.add(nums[indx]);
        dfs(ans,dummy,indx+1,nums);
        dummy.remove(dummy.size()-1);
        dfs(ans,dummy,indx+1,nums);
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {

        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> dummy = new ArrayList<>();
        dfs(ans,dummy,0,nums);
        Map<List,Integer> maps = new HashMap<>();
        for(int i=0;i<ans.size();i++){
            maps.put(ans.get(i),maps.getOrDefault(ans.get(i),0)+1);
        }
        List<List<Integer>> sol = new ArrayList<>();
        for(Map.Entry<List,Integer> item : maps.entrySet()){
                sol.add(item.getKey());
        }
        return sol;
    }
}