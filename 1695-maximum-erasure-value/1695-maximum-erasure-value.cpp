class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>mp;
        int l=0,r=0,ans=0,n=nums.size(),sum=0;
        while(r<n){
            mp[nums[r]]++;
            sum+=nums[r];
            while(mp[nums[r]]==2){
                sum-=nums[l];
                mp[nums[l++]]--;
            }
            r++;
            ans=max(ans,sum);
        }
        return ans;
    }
};