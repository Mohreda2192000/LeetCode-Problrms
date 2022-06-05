class Solution {
public:
    int search(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,md,ans=-1;
        while(l<=r)
        {
            md=(r+l)/2;
            if(target==nums[md])
            {
                ans=md;
                break;
            }
            else if(target>nums[md])
                l=md+1;
            else
                r=md-1;
        }
        if(ans!=-1)
            ans=mp[nums[ans]];
        return ans;
    }
};