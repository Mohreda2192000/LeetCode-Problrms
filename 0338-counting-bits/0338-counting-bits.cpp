class Solution {
public:
    vector<int> countBits(int n) {
        cout<<(4>>1);
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            int cnt=0;
            int num=i;
            while(num){
                cnt++;
               num&=num-1;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};