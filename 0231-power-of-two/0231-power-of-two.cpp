class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n<0){
            return false;
        }
        int count=0;
        while(n>0){
            if((n& 1)==1)
            count++;
            n=n>>1;
        }

        if(count!=1) return false;
        else return true;
    }
};