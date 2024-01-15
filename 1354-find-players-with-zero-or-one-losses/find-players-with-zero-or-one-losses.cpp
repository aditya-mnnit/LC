class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    map<int,int>mp;
        set<int>s;
        vector<vector<int>>ans(2);
        for(int i=0;i<matches.size();i++)
        {
           mp[ matches[i][1]]++;
            s.insert(matches[i][0]);
            
            
        }
        for(auto i:mp)
        {
            if(i.second==1)
                ans[1].push_back(i.first);
        }
        for(auto i:s)
        {
            if(mp.find(i)==mp.end())
                ans[0].push_back(i);
        }
        return ans;
        
    }
};