class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         digits[digits.size()-1]++;
        for(int i=digits.size()-1;i>=0;i--){
    
            if(digits[i]>=10&&i==0){
                digits[i]=1;
                digits.push_back(0);
            }
            else if(digits[i]>=10){
                digits[i]=0;
                digits[i-1]++;
            }
            else break;
            }
        
        return digits;
    }
};