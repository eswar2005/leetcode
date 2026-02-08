class Solution {
    public String reverseWords(String s) {
        // s=s.trim();
        // String[] arr =s.split(" ");
        String[] arr = s.trim().split("\\s+");
        int l=0;
        int r=arr.length-1;
        while(l<r){
            String temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        StringBuilder ans=new StringBuilder();
        for(int i=0;i<arr.length;i++){
            ans.append(arr[i]);
            if(i!=arr.length-1){
                ans.append(" ");
            }
        }
        return ans.toString();
    }
}