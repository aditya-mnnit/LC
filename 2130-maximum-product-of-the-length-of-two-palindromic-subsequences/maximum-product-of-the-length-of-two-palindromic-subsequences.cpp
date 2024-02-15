class Solution {
public:
bool ispal(string s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        return false;
    }
    return true;
}
int mx=0;
void f(int i,int n,string &s1,string &s2,string &s)
{
    if(i==n)
    {
        if(ispal(s1)&&ispal(s2))
        {
            mx=max(mx,(int)s1.size()*(int)s2.size());

        }
        return;
    }
    s1.push_back(s[i]);
    f(i+1,n,s1,s2,s);
    s1.pop_back();
    s2.push_back(s[i]);
    f(i+1,n,s1,s2,s);
    s2.pop_back();
    f(i+1,n,s1,s2,s);

}
    int maxProduct(string s) {
        string s1="",s2="";
        int n=s.size();
        f(0,n,s1,s2,s);
        return mx;
    }
};