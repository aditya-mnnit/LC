class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,int>mp1;
        string w="";
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]>0)
            {
                w.push_back(mp[s[i]]);
            }
            else
            {
               if(mp1[t[i]]>0)
               return false;
               mp1[t[i]]++;
                mp[s[i]]=t[i];
                w.push_back(t[i]);
            }
        }
        cout<<w<<"\n";
        if(w==t)
        return true;
        else
        return false;
    }
};