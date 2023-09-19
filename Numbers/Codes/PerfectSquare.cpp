class Solution {
public:
    bool isPerfectSquare(int num) {
    long val=0;
     for(long i=1;i*i<=num;++i){
       val=i;
     } 
     //cout<<val<<endl;
     if(val*val==num) return true;
     return false;  
    }
};