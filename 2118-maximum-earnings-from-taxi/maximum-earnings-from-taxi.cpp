class Solution {
public:
long long f(int i,vector<vector<int>>&v,vector<int>&st,vector<long long>&dp)
{
if(i==v.size())
return 0;
if(dp[i]!=-1)
return dp[i];
long long tk=0,nt=0;
int id=lower_bound(st.begin(),st.end(),v[i][1])-st.begin();
tk=v[i][2]+f(id,v,st,dp);
nt=f(i+1,v,st,dp);
return dp[i]=max(tk,nt);
}
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        int m=rides.size();
        vector<vector<int>>v;
        vector<int>st(m);
        for(int i=0;i<m;i++)
        {
            st[i]=rides[i][0];
            v.push_back({rides[i][0],rides[i][1],rides[i][2]+(rides[i][1]-rides[i][0])});
        }
        sort(v.begin(),v.end());
        sort(st.begin(),st.end());
        vector<long long>dp(m+1,-1);
        return f(0,v,st,dp);

    }
};