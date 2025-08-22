class Solution {
    // public int lengthOfLastWord(String s) {
    //     int n=s.length();
    //     s=s.trim();
    //     int cnt=0;
    //     for(int i=n-1;i>=0;i--){
    //         char k = s.charAt(i);
    //         if(k!=' '){
    //             cnt++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     return cnt;

    // }
    public int lengthOfLastWord(String s) {
        int cnt = 0;
        s = s.trim();
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            char ch = s.charAt(i);
            if (ch != ' ') {
                cnt++;
            } 
            else {
               // if (cnt > 0) {
                    break; 
                //}
            }
        }
        return cnt;
    }
}