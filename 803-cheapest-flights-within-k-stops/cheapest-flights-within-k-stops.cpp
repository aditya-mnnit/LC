class Solution {
public:

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
           vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++)
        {
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        // queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        queue<pair<int,int>>pq;
        pq.push({0,src});
        vector<int>dis(n,1e9);
        int k=-1;
        while(!pq.empty())
        {
            if(k==K)
            break;
            int s=pq.size();
            while(s--)
            {
                auto it=pq.front();
            pq.pop();
            int d=it.first;
            int ele=it.second;
            for(auto x:adj[ele])
            {
                if(d+x.second<dis[x.first])
                {
                    dis[x.first]=d+x.second;
                    pq.push({dis[x.first],x.first});
                }
            }
            }
            k++;
        }
        if(dis[dst]==1e9)
        dis[dst]=-1;
        return dis[dst];
      
      
      
      
    }
};