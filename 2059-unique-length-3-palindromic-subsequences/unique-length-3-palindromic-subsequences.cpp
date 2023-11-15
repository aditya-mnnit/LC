class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        int su=0;
        unordered_map<char,int>mp;
     unordered_map<char,int>lasto;
     map<char,map<char,int>>xmp;
     for(int i=n-1;i>=0;i--)
     {
         if(lasto[s[i]]==0)
         lasto[s[i]]=i+1;
     }
     for(int i=0;i<n;i++)
     {
         if(i+1==lasto[s[i]])
         {
             su+=xmp[s[i]].size();
         }
         for(auto x:mp)
         {
             if(x.second>0)
             xmp[x.first][s[i]]++;
         }
         mp[s[i]]++;
     }
     return su;
    }
};