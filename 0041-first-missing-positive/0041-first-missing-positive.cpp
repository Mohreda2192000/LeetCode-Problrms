class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)mp[i]++;
        
        for(int i=1;i<=500009;i++)
        {
            if(!mp[i])return i;
        }
        return 0;
    }
};