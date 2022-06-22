class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pr;
        for(int i=0;i<nums.size();i++)
            pr.push(nums[i]);
        
        while(k>1)
        {
            pr.pop();
            k--;
        }
        return pr.top();
    }
};