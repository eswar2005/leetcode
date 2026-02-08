class Solution {
    public boolean isPalindrome(String s) {
        int m=s.length();
        String st="";
        for(int i=0;i<m;i++){
            char a=s.charAt(i);
            if(Character.isLetterOrDigit(a)){
                st+=Character.toLowerCase(a);
            }
        }
        char[] temp=st.toCharArray();
        int r=temp.length-1;
        int l=0;
        while(l<r){
            char c=temp[l];
            temp[l]=temp[r];
            temp[r]=c;
            l++;
            r--;
        }
        String t=new String(temp);
        return st.equals(t);
    }
}