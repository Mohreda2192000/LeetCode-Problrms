class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=nums.size();
        vector<int>temp(ans);
        int cnt=0;
        for(auto i:nums){
            if(i==val){
                ans--;
            }
            else{
                temp[cnt++]=i;
            }
        }
        nums=temp;
        return ans;
    }
};