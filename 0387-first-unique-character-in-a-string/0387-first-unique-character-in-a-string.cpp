class Solution {
public:
    int firstUniqChar(string s) {
        string c="";
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:s){
            if(mp[ch]==1){
                c+=ch;
            }
        }
        for(int i=0;i<s.length();i++){
            if(c[0]==s[i]){
                return i;
            }
        }
        return -1;
    }
};