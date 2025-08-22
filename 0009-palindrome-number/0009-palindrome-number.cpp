class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_num=0;
        int k=x;
        while(k>0){
            int last = k%10;
            rev_num=(rev_num*10)+last;
            k=k/10;
        }
        if(x==rev_num){
            return true;
        }
        return false;
    }
};