class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums.back(),nums[0]);
    }
    int gcd(int a,int b){
        if(!b)return a;
        return gcd(b,a%b);
    }
};