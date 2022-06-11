class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        map<int,int>mp;
        mp[0]=0;
        int ans=INT_MAX,cnt=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==x)ans=min(ans,i+1);
            mp[sum]=i+1;
        }
        if(sum<x)return -1;
        if(sum==x)return nums.size();
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            int y= x-sum;
            if(mp.find(y)!=mp.end()){
                ans=min(ans,cnt+mp[y]);
            }
            cnt++;
        }
        
        if(ans==INT_MAX)ans=-1;
        return ans;
        
    }
};