class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenHaystack=haystack.size();
        int lenNeedle=needle.size();
        int cnt=0,i=0,j=0;
        for( i=0;i<lenHaystack;i++){
            if(haystack[i]==needle[0]){
                cnt=0;
                for( j=0;j<lenNeedle&&i+j<lenHaystack;j++){
                    if(haystack[i+j]!=needle[j]){
                        break;
                    }
                    cnt++;
                }
                if(cnt==lenNeedle)return i;
            }
        }
        return -1;
    }
};