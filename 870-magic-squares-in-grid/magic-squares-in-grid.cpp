class Solution {
public:
bool check(vector<vector<int>>&v,int x,int y)
{
    map<int,int>st;
    for(int i=x;i<x+3;i++)
{
    
    for(int j=y;j<y+3;j++)
    {
    st.insert({v[i][j],1});
    }

}
auto it=st.begin();
auto it2=st.rbegin();
if(it->first!=1||it2->first!=9||st.size()!=9)
return false;
    unordered_map<int,int>mp;
    int s=0;
for(int i=x;i<x+3;i++)
{
    s=0;
    for(int j=y;j<y+3;j++)
    {
    s+=v[i][j];
    }
    mp[s]++;
}
for(int j=y;j<y+3;j++)
{
    s=0;
    for(int i=x;i<x+3;i++)
    {
        s+=v[i][j];
    }
    mp[s]++;
}
s=0;
s+=v[x][y];
s+=v[x+1][y+1];
s+=v[x+2][y+2];
mp[s]++;
s=0;
s+=v[x][y+2];
s+=v[x+1][y+1];
s+=v[x+2][y];
mp[s]++;
if(mp.size()==1)
return true;
return false;
}
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<=n-3;i++)
        {
            for(int j=0;j<=m-3;j++)
            {
                if(check(grid,i,j))
                c++;
            }
        }
        return c;
    }
};