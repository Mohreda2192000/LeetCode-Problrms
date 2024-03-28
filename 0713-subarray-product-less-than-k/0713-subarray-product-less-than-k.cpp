class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
         if(k<=1) return 0;
        int n=a.size();
        long long p=1;
        int start=0, end=0, count=0;
        while(end<n){
            p*=a[end];
            while(start < n && p>=k){
                p/=a[start];
                start++;
            }
            
            if(p<k){
                count+=(end-start)+1;
                end++;
            }
        }
        return count;
    }
};