class Solution {
public:
    int hammingWeight(int n) {
        int temp=1<<31;
        int cnt=0;
        for(int i=31;i>=0;i--){
            if((n&(1<<i))){
                cnt++;
            }
        }
        return cnt;
    }
};