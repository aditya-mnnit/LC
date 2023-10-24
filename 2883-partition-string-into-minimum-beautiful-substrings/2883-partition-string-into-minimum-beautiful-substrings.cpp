class Solution {
public:
unordered_map<string,int>mp;
int f(int i,string &s,vector<int>&dp)
{
    if(i>=s.size())
    return 0;
if(dp[i]!=-1)
return dp[i];

int ans=1e9;
for(int j=0;i+j<s.size();j++)
{
   
    string t=s.substr(i,j+1);
    if(mp[t]>0)
    {
        int tk=1+f(i+j+1,s,dp);
        ans=min(ans,tk);
       
    }
     

}
return dp[i]=ans;
}
    int minimumBeautifulSubstrings(string s) {
        
        int x = 1;
        while(x<100000){
             int n = (int)(log2(x));
   
        mp[bitset<64>(x).to_string().substr(64 - n- 1)]++;
        x*=5;
        }
        // for(auto x:mp)
        // {
        //     cout<<x.first<<" ";
        // }
        cout<<"\n";
       int n=s.size();
       vector<int>dp(n+1,-1);
       int y= f(0,s,dp);
        if(y>=1e9)
            y=-1;
        return y;
    }
};