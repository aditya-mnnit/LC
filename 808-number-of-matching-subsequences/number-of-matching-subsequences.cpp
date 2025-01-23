class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            if(words[i].size()<=n)
            {
                mp[words[i]]++;
            }
        }
        int ans=0;
        for(auto x:mp)
        {
            string tp=x.first;
            int ct=x.second;
            int k=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]==tp[k])
                {
                    k++;
                }
                if(k==tp.size())
                {
                    ans+=ct;
                    break;
                }
            }
        }
        return ans;
    }
};