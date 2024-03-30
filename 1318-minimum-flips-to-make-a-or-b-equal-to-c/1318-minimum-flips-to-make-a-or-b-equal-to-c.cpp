class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32;i++){
            int aa=((1<<i)&a)>0;
            int bb=((1<<i)&b)>0;
            int cc=((1<<i)&c)>0;
            //if((aa|bb)==cc)continue;
            if(cc==1){
                if(!aa&&!bb)ans++;
            }
            else{
                if(aa==1)ans++;
                if(bb==1)ans++;
            }
            cout<<aa; 
        }
        return ans;
    }
};