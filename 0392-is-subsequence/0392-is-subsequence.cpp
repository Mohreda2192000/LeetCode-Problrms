class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,cnt=0;
        for(auto i:s){
            while(i!=t[j]&&j<t.size())j++;
            if(i=t[j]){cnt++;
                       j++;
                      cout<<i;
                      }
        }
        cout<<j<<endl;
        return s.size()==cnt;
    }
};