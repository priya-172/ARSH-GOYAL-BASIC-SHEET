class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int firstEle=0;
        int secondEle=1;
        for(int i=2;i<=n;++i){
            int curr=firstEle+secondEle;
            firstEle=secondEle;
            secondEle=curr;
        }
        return secondEle;
    }
};