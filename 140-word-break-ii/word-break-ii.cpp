class Solution {
public:
unordered_map<string,int>mp;
vector<string>ans;
// int f(int i,string s,vector<int>&dp)
// {
//     if(i==s.size())
//     return 1;
//     if(dp[i]!=-1)
//     return dp[i];
//    string w="";
//    int tk=0;
//    for(int j=i;j<s.size();j++)
//    {
//        w.push_back(s[j]);
//        if(mp[w]>0)
//        {
//            tk.append(w)+f(j+1,s,dp);
//        }
//    }
//    return dp[i]=tk;

// }
void f(int i,string w,string &s)
{
    if(i>=s.size())
    {
        ans.push_back(w);
    }
   string t="";
   for(int j=1;j<=s.size()-i;j++)
   {
       t=s.substr(i,j);
       if(mp[t]>0)
       {
           if(w.size()!=0)
           w.push_back(' ');
           string tmp=w;
           tmp.append(t);

           f(i+j,tmp,s);
           if(w.size()!=0)
           w.pop_back();
       }
   }
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
         int n=s.size();
        // vector<int>dp(n+1,-1);
        for(int i=0;i<wordDict.size();i++)
        mp[wordDict[i]]++;
        string w="";
         f(0,"",s);
       return ans;
    }
};