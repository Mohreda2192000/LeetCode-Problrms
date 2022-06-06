class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0,r=s.size();
        vector<int>v;
        for(auto i:s){
            if(i=='I')v.push_back(l++);
            else v.push_back(r--);
        }
        v.push_back(l++);
        return v;
    }
};