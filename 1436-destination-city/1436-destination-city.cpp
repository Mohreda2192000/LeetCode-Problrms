class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       map<string,int>mp;
        
        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]--;
        }
        for(auto i:mp){
            if(i.second<0)return i.first;
            //cout<<i.second<<endl;
        }
        return "";
    }
};