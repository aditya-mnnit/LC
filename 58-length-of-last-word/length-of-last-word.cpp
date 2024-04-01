class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        int c=0,ans=0;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]==' ')
            s.pop_back();
            else
            break;
        }
         l=s.length();
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                ans=c;
                c=0;
                break;
            }
            else
            c++;
        }
        if(c!=0)
        ans=c;
        return ans;

        
    }
};