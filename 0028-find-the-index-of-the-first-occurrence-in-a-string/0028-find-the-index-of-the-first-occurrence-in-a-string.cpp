class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        for(int i=0;i<haystack.length();i++){
            ans=haystack.find(needle);
        }
        return ans;
        
    }
};