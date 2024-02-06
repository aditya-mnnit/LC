class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string w=strs[i];
            sort(w.begin(),w.end());
            mp[w].push_back(strs[i]);
        }
        vector<vector<string>>v;
        for(auto x:mp)
        {
            v.push_back(x.second);
        }
        return v;
    }
};