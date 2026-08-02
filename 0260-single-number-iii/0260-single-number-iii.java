class Solution {
    public int[] singleNumber(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer> mp = new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        List<Integer> ls = new ArrayList<>();
        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
            if(entry.getValue()==1){
                ls.add(entry.getKey());
            }
        }
        int[] ans = new int[ls.size()];
        for(int i=0;i<ls.size();i++){
            ans[i]=ls.get(i);
        }
        return ans;
    }
}