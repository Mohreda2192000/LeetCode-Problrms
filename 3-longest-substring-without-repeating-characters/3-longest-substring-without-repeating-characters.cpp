class Solution {
public:
    unordered_map<int,int>fr;
    
    
    int lengthOfLongestSubstring(string s) {
        if(s.empty())return 0;
        int ans=1;
        deque<char>de;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(de.empty())de.push_back(s[i]),fr[s[i]]++;
            else{
                if(!fr[s[i]])
                {
                    de.push_back(s[i]),fr[s[i]]++;
                    ans=max(ans,(int)de.size());
                 }
                else
                {
                    
                    
                    de.push_back(s[i]),fr[s[i]]++;
                    while(1)
                    {
                        if(de[0]==s[i])
                        {
                            fr[de[0]]--;
                            de.pop_front();
                            break;
                        }
                        fr[de.front()]--;
                            de.pop_front();
                    }             
                    ans=max(ans,(int)de.size());
                }
            }
        }
        
        return ans;
    }
};