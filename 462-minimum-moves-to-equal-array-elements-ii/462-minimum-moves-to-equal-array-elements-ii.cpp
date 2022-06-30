class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end());
        long long sum=0,sum1=0,ans;
        int n=v.size();

        for(auto i:v)
            sum+=i;
        ans=1e18;
        long long l,r;
        for(int i=0;i<n;i++){
            sum-=v[i];
            l=i,r=n-i-1;
            long long a=l*v[i],b=r*v[i];
            ans=min(ans,abs(a-sum1)+abs(sum-b));
            sum1+=v[i];
        }
        
        return ans;
        
    }
};