class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i=(nums.size()-1)/2,j=nums.size()-1,cnt=nums.size();
        vector<int>temp;
        while(cnt--){
            if(i==j){temp.push_back(nums[i]);break;}
            //cout<<nums[i]<<' '<<nums[j]<<' ';
            if(i>=0)temp.push_back(nums[i]);
            if(j>(nums.size()-1)/2)temp.push_back(nums[j]);
            i--;
            j--; 
        }
        nums=temp;
    }
};