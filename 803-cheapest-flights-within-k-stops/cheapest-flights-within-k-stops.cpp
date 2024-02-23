class Solution {
public:

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        // adj.resize(n);
        vector<vector<vector<int>>>adj(n);
        for(int i=0;i<flights.size();i++)
        {
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});

        }
        vector<int>dis(n,1e9);
        set<vector<int>>st;
        st.insert({0,0,src});
    while(!st.empty())
    {
        vector<int>x=*st.begin();
         st.erase(x);
        int el=x[2];
        int d=x[1];
        int c=x[0];
        if(c>k)
        continue;
        for(auto it:adj[el])
        {
            if(d+it[1]<dis[it[0]]&&c<=k)
            {
                // cout<<el<<" "<<it[0]<<"\n";
                dis[it[0]]=min(dis[it[0]],d+it[1]);
                st.insert({c+1,dis[it[0]],it[0]});
            }
        
        }
       
    }
    if(dis[dst]==1e9)
    return -1;
    return dis[dst];
    }
};