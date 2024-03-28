class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //if(k==1)return 1;
        map<int,int>frq;
        int idx=0,ans=0;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
            while(frq[nums[i]]>k){
                frq[nums[idx++]]--;
            }
            ans=max(ans,i-idx+1);
        }
        return ans;
    }
};