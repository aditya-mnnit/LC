class Solution {
public:
         bool check(string &a,string &b)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
                return true;
            else if(a[i]>b[i])
                return false;
        }
        return false;
    }
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int l=0;
        int lind=-1;
        int rind =-1;
        string ans="";
        int c=0;
        int mx=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                c++;
            while(c==k)
            {
               
                if((i-l)<=mx)
                {
                    if(mx!=INT_MAX)
                    {
                        string tp=s.substr(l,(i-l+1));
                        int x=tp.size();
                        int y=ans.size();
                        if(x<y)
                        {
                            ans=tp;
                        }
                        else if(x==y&&check(tp,ans))
                        {
                            ans=tp;
                        
                        }
                    } 
                    else
                    {
                        ans=s.substr(l,(i-l+1));
                    }
                    mx=(i-l);
                }
                    
                
                if(s[l]=='1')
                    c--;
                l++;
                
            }
        }
        
            return ans;
    }
};