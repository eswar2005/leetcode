class Solution {
public:
    char findTheDifference(string s, string t) {
        int  xors=0;
        for(int i=0;i<s.size();i++){
            xors^=s[i];
        }
        for(int i=0;i<t.size();i++){
            xors^=t[i];
        }
        return xors;        
    }
};