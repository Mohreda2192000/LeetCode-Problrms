class Solution {
public:
    double power(double x, int n) {
      
    if(n<0) x=1/x, n*=-1;
    double ans = 1;
    while(n>0){
        if(n&1)
            ans *= x;
        x = x*x;
        n = n>>1;
    }
    return ans;
}
    double myPow(double x, int n) 
    {
        if(n<0)
            x=(1/x);
        return power(x,abs(n));
    }
};