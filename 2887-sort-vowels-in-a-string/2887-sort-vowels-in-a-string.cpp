class Solution {
public:
    string sortVowels(string s) {
            int n=s.size();
        unordered_map<char,int>v;
        v['a']++;
        v['A']++;
        v['e']++;
        v['E']++;
        v['i']++;
        v['I']++;
        v['o']++;
        v['O']++;
        v['u']++;
        v['U']++;
        string w="";
        vector<pair<int,char>>vt;
        for(int i=0;i<n;i++)
        {
            if(v[s[i]]>0)
            {
                w.push_back('?');
                vt.push_back({(int)(s[i]),s[i]});
                
            }
            else
                w.push_back(s[i]);
        }
        sort(vt.begin(),vt.end());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(w[i]=='?')
            {
                w[i]=vt[k].second;
                k++;
            }
        }
        return w;
    }
};