class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int cnt=0;
        if(n==1)return true;
        for(int i=0;i<n;i++){
            if(word[i]>='a' and word[i]<='z'){
                cnt++;
            }
        }
        if(cnt==0 or cnt==n)return true;
        if((word[0]>='A' and word[0]<='Z') and cnt==n-1)return true;
        return false;

    }
};