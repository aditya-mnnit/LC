class Solution {
public:
vector<int>vis,ans,dis;
vector<vector<vector<int>>>adj;

int df(int node)
{
    vis[node]=1;
    int c=0;
    for(auto x:adj[node])
    {
        if(vis[x[0]]==1)
        continue;
        c+=dis[x[0]]-dis[node]+df(x[0]);
    }
    return c;
}
    int minReorder(int n, vector<vector<int>>&edges) {
        adj.resize(n+1);
        vis.assign(n+1,0);
        dis.assign(n,INT_MAX);
        ans.resize(n);
        int m=edges.size();
        for(int i=0;i<m;i++)
        {
            int x=edges[i][0];
            int y=edges[i][1];
            adj[x].push_back({y,0});
            adj[y].push_back({x,1});
        }
        deque<int>dq;
        dq.push_back(0);
        dis[0]=0;
        while(!dq.empty())
        {
            int it=dq.front();
            dq.pop_front();
            for(auto x:adj[it])
            {
                if(dis[x[0]]>dis[it]+x[1])
                {
                dis[x[0]]=dis[it]+x[1];
                if(x[1]==1)
                dq.push_back(x[0]);
                if(x[1]==0)
                dq.push_front(x[0]);
                }
            }
        }
         vis.assign(n+1,0);
      int mi=df(0);
        ans[0]=mi;
          vis.assign(n+1,0);

        // int mi=0;
        // for(int i=0;i<n;i++)
        // mi=max(mi,dis[i]);
        return m-mi;

    }
};