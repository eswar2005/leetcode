class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sums=0;
        int j=1;
        while(1){
            sums=j;
            for(int i=0;i<nums.size();i++){
                sums+=nums[i];
                if(sums<=0){
                    break;
                }
            }
            if(sums>0){
                break;
            }
            j++;
            

        }
        return j;
    }
};