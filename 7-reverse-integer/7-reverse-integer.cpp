class Solution {
public:
    int reverse(int x) {
        bool flag=0;
        long long y=x;
        if(y<0){flag=1;y*=-1;}
       long long ans=0;
        while(y){
            ans=ans*10+(y%10);
            y/=10;
        }
        if(flag)ans*=-1;
        long long p=2147483648;
        if(ans<-p||ans>p-1)ans=0;
        
        return ans;
    }
};