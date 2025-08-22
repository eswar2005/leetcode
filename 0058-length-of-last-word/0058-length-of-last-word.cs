public class Solution {
    public int LengthOfLastWord(string s) {
        s=s.Trim();
        int n=s.Length;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;

    }
}