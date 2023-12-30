class Solution {
public:
    vector<vector<int>>adj;
    vector<int>vis;
long long sum=0;
long long f(int node,vector<int>&val)
{
    vis[node]=1;
    sum+=val[node];
    long long s=0;
    for(auto x:adj[node])
    {
        if(vis[x]==-1)
        {
            s+=f(x,val);
        }
    }
    if(s==0)
    s=INT_MAX;
    return min(s,1LL*val[node]);

}
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        
        int m=edges.size();
        int n=values.size();
        adj.resize(n);
        vis.assign(n,-1);
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        sum=0;
        long long x=f(0,values);
        return sum-x;
    }
};