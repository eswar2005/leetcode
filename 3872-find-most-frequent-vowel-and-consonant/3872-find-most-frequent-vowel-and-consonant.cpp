class Solution {
public:
    int maxFreqSum(string s) {
        int maxs_v=0;
        int maxs_c=0;
        map<char,int>mp;
        for(char i : s){
            mp[i]++;
        }
        
       for (auto& i : mp) {
    if (i.first == 'a' || i.first == 'e' || i.first == 'i' || i.first == 'o' || i.first == 'u') {
        maxs_v = max(maxs_v, i.second);
    } else {
        maxs_c = max(maxs_c, i.second);
    }
}
        return maxs_v+maxs_c;
    }
};