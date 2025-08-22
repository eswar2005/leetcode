class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        int n=s.length();
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            char k = s.charAt(i);
            if(k!=' '){
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;

    }

}