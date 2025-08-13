class Solution {
public:

bool isPowerOfThree(int n) {
   
   if(n<1){
       return false;
   }
   //get largest exponent
   int maxExponentOfThree=floor(log(INT_MAX)/log(3));

   //get largest INT power of three
   int maxIntPowerOfThree=pow(3,maxExponentOfThree);
   

   return (n>0 && maxIntPowerOfThree%n==0);
    
}
};