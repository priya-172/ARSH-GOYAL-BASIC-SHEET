
class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return 0;
        if(n==1 || n==2) return n;
        int step1=1, step2=2;
        int currentStep=0;
        for(int i=2;i<n;++i){
          currentStep= step1+step2;
            step1=step2;
            step2=currentStep;
        }
        return currentStep;
        
    }
};