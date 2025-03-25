class Solution {
public:
    int countPrimes(int n) {
        vector<int>seive(n+1,true);
        seive[0]=false;
        //seive[1]=false;
        for(int i=2;i*i<=n;i++){
            if(seive[i]){
                for(int j=i+i;j<=n;j=j+i){
                    seive[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<seive.size()-1;i++){
            if(seive[i]== true){
                cnt++;
            }
        }
        return cnt;
    }
};