class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>ch;
        for(auto x:mp)
        {
            ch.push_back({x.second,x.first});
        }
        sort(ch.begin(),ch.end());
        string ans="";
        for(int i=ch.size()-1;i>=0;i--)
        {
            string w="";
            for(int j=0;j<ch[i].first;j++)
            w.push_back(ch[i].second);
            ans.append(w);
        }
        return ans;
        
    }
};