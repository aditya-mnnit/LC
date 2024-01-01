class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int k=0;
        int c=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(k==m)
            {
                break;
            }
            while(s[k++]<g[i])
            {
                // k++;
                if(k==m)
                {
                    f=1;
                
                break;
                }
            }
            if(f)
            break;
            // k++;
            c++;
        }
        return c;
    }
};