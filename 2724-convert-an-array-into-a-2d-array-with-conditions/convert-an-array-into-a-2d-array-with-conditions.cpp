class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        vector<vector<int>>ans;
        int f=0;
        while(true)
        {
            f=0;
            vector<int>v;
            for(auto x:mp)
            {
                if(x.second>0)
                {
                v.push_back(x.first);
             mp[x.first]--;
                    f=1;
                }
            }
            if(f==0)
                break;
            ans.push_back(v);
        }
        return ans;
    }
};