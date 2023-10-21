class Solution {
public:
    int minimumTime(string s) {
        int su=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            su--;
            else
            su++;
            if(su>=0)
            {
                su=0;
            }
            // cout<<su<<" ";
            ans=min(ans,su);
        }
        
        return n+ans;
    }
};