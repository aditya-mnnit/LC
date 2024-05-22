class Solution {
public:
vector<vector<string>>ans;
void f(int i,int n,string &s,vector<string>&dp)
{
    if(i==n)
    {
        ans.push_back(dp);
        // dp.clear();
        return;
    }
    string w="";
    string tp;
    for(int j=i;j<n;j++)
    {
        w.push_back(s[j]);
        tp=w;
        reverse(tp.begin(),tp.end());
        if(tp==w)
        {
            dp.push_back(w);
            f(j+1,n,s,dp);
           dp.pop_back();
            
        }
        
    }
    return;
    
    
    
}
    vector<vector<string>> partition(string s) {
         ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  
    
        vector<string>dp;
        int n=s.size();
        f(0,n,s,dp);
        return ans;
    }
};