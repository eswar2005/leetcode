class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        while(n>9){
            sum=0;
            while(n>0){
                int a=n%10;
                sum+=(a*a);
                n/=10;
            }
            n=sum;
            // if(n<8){
            //     break;
            // }
            //cout<<n<<" ";
        }
        if(n==1 || n==7){
            return true;
        }
        return false;
    }
};