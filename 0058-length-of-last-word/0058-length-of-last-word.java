class Solution {
    public int lengthOfLastWord(String s) {
        s=s.strip();
        String[] st=s.split(" ");
        int n=st.length;
        int maxs=0;
        int len=0;
        for(int i=0;i<n;i++){
            String a=st[i];
            len=a.length();
            if(len>maxs){
                maxs=len;
            }
        }
        return len;
    }
}